PORTNAME=	httr2
DISTVERSION=	0.2.3
CATEGORIES=	net
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	Perform HTTP Requests and Process the Responses
WWW=		https://httr2.r-lib.org

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	R-cran-knitr>0:print/R-cran-knitr
RUN_DEPENDS=	R-cran-cli>=3.0.0:devel/R-cran-cli \
		R-cran-rappdirs>0:devel/R-cran-rappdirs \
		R-cran-glue>0:devel/R-cran-glue \
		R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-curl>0:ftp/R-cran-curl
TEST_DEPENDS=	R-cran-clipr>0:devel/R-cran-clipr \
		R-cran-covr>0:devel/R-cran-covr \
		R-cran-askpass>0:security/R-cran-askpass

USES=		cran:auto-plist,openssl

.include <bsd.port.mk>
