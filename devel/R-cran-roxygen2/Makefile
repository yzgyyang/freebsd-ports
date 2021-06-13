# Created by: Guangyuan Yang <ygy@FreeBSD.org>

PORTNAME=	roxygen2
DISTVERSION=	7.1.1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	In-Line Documentation for R

LICENSE=	GPLv2+

BUILD_DEPENDS=	R-cran-knitr>0:print/R-cran-knitr
RUN_DEPENDS=	R-cran-R6>=2.1.2:devel/R-cran-R6 \
		R-cran-Rcpp>=0.11.0:devel/R-cran-Rcpp \
		R-cran-desc>=1.2.0:devel/R-cran-desc \
		R-cran-pkgload>=1.0.2:devel/R-cran-pkgload \
		R-cran-purrr>=0.3.3:devel/R-cran-purrr \
		R-cran-rlang>0:devel/R-cran-rlang \
		R-cran-knitr>0:print/R-cran-knitr \
		R-cran-digest>0:security/R-cran-digest \
		R-cran-brew>0:textproc/R-cran-brew \
		R-cran-commonmark>0:textproc/R-cran-commonmark \
		R-cran-xml2>0:textproc/R-cran-xml2
TEST_DEPENDS=	R-cran-covr>0:devel/R-cran-covr \
		R-cran-testthat>=2.1.0:devel/R-cran-testthat \
		R-cran-rmarkdown>0:textproc/R-cran-rmarkdown

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
