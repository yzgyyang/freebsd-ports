PORTNAME=	spelling
DISTVERSION=	2.2.1
PORTREVISION=	1
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tools for Spell Checking in R
WWW=		https://docs.ropensci.org/spelling/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	R-cran-knitr>0:print/R-cran-knitr \
		R-cran-commonmark>0:textproc/R-cran-commonmark \
		R-cran-hunspell>=3.0:textproc/R-cran-hunspell \
		R-cran-xml2>0:textproc/R-cran-xml2

USES=		cran:auto-plist

.include <bsd.port.mk>
