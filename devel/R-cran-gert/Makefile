PORTNAME=	gert
DISTVERSION=	1.3.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	jpbeconne@free.fr
COMMENT=	Simple Git Client for R

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-askpass>0:security/R-cran-askpass \
		R-cran-credentials>=1.2.1:security/R-cran-credentials \
		R-cran-openssl>=1.4.1:security/R-cran-openssl \
		R-cran-rstudioapi>=0.11:devel/R-cran-rstudioapi \
		R-cran-sys>0:devel/R-cran-sys \
		R-cran-zip>=2.1.0:archivers/R-cran-zip
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}
LIB_DEPENDS=    libgit2.so:devel/libgit2

USES=		cran:auto-plist

.include <bsd.port.mk>
