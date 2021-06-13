PORTNAME=	rio
DISTVERSION=	0.5.26
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	A Swiss-Army Knife for Data I/O

LICENSE=	GPLv2

BUILD_DEPENDS=	R-cran-knitr>0:print/R-cran-knitr
RUN_DEPENDS=	R-cran-curl>=0.6:ftp/R-cran-curl \
		R-cran-haven>=1.1.2:math/R-cran-haven
TEST_DEPENDS=	R-cran-jsonlite>0:converters/R-cran-jsonlite \
		R-cran-bit64>0:devel/R-cran-bit64 \
		R-cran-clipr>0:devel/R-cran-clipr \
		R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-testthat>0:devel/R-cran-testthat \
		R-cran-knitr>0:print/R-cran-knitr

USES=		cran:auto-plist

.include <bsd.port.mk>
