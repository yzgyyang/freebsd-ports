# Created by: Hirohisa Yamaguchi <umq@ueo.co.jp>

PORTNAME=	milter-manager
PORTVERSION=	2.1.1
PORTREVISION=	1
CATEGORIES=	mail ruby
MASTER_SITES=	OSDN/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Super milter that can invoke several milters selectively

LICENSE=	AGPLv3 GFDL GPLv3 LGPL3
LICENSE_COMB=	multi

BUILD_DEPENDS=	rubygem-glib2>0:devel/rubygem-glib2
LIB_DEPENDS=	libev.so:devel/libev
RUN_DEPENDS=	rubygem-glib2>0:devel/rubygem-glib2

USES=		compiler:c++11-lang gettext gmake gnome libtool pathfix pkgconfig
USE_GNOME=	glib20 intltool
USE_LDCONFIG=	yes
USE_RC_SUBR=	milter-manager
USE_RUBY=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libev \
		--with-package-platform=freebsd
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	*
PORTEXAMPLES=	*

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
CONFIGURE_ARGS+=--with-html-dir=${DOCSDIR}
.else
CONFIGURE_ARGS+=--with-html-dir=${WRKDIR}/doc
.endif

.if ! ${PORT_OPTIONS:MEXAMPLES}
EXAMPLESDIR=	${WRKDIR}/examples
.endif

post-patch:
	@${FIND} ${WRKSRC} -type f -name Makefile.in -exec \
	${REINPLACE_CMD} -e "s#\$$(datadir)/@PACKAGE@#${DATADIR}#" \
			 -e "s#\$$(datarootdir)/\$$(PACKAGE)#${DATADIR}#" {} +
	@${REINPLACE_CMD} -e "s#\\\\\$$(pkgdatadir)/sample#${EXAMPLESDIR}#" ${WRKSRC}/configure
	@${RM} -r ${WRKSRC}/binding/ruby/glib-2.2.5

.include <bsd.port.mk>
