PORTNAME=	cdrkit
PORTVERSION=	1.1.11
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	http://ponce.cc/slackware/sources/repo/ \
		http://vault.101011010.xyz/distfiles/ \
		http://freebsd.nsu.ru/distfiles/

MAINTAINER=	jharris@widomaker.com
COMMENT?=	Command-line CD/DVD writing suite
WWW=		http://www.cdrkit.org/

LICENSE=	GPLv2+

RUN_DEPENDS?=	${PORTNAME}-genisoimage>0:sysutils/genisoimage

USES=		cmake iconv perl5 sbrk shebangfix
USE_PERL5=	run
SHEBANG_FILES=	3rd-party/dirsplit/dirsplit
# Fix build with clang11
CFLAGS+=	-fcommon

CMAKE_ARGS=	-DMANSUBDIR:PATH=share/man

CONFLICTS?=	cdrtools

PLIST_SUB?=	CDRKIT="" GENISOIMAGE="@comment "

post-patch:
	@${REINPLACE_CMD} -e 's|fexecve|librols_fexecve|g' \
	    ${WRKSRC}/librols/fexec.c \
	    ${WRKSRC}/include/schily.h
	@${REINPLACE_CMD} -e 's|getdelim|wodim_getdelim|g' ${WRKSRC}/wodim/cue.c

.include <bsd.port.mk>
