PORTNAME=	ruby_language_server
PORTVERSION=	0.3.17
CATEGORIES=	lang rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Language server implementation for Ruby
WWW=		https://github.com/kwerle/ruby_language_server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activerecord70>=7.0<8:databases/rubygem-activerecord70 \
		rubygem-amatch>=0:textproc/rubygem-amatch \
		rubygem-bundler>=0,1:sysutils/rubygem-bundler \
		rubygem-etc>=0:devel/rubygem-etc \
		rubygem-fuzzy_match>=0:devel/rubygem-fuzzy_match \
		rubygem-json>=0:devel/rubygem-json \
		rubygem-rubocop>=1.38.00:devel/rubygem-rubocop \
		rubygem-rubocop-ast>=1.32.0:devel/rubygem-rubocop-ast \
		rubygem-rubocop-performance>=0:devel/rubygem-rubocop-performance \
		rubygem-rubocop-rspec>=0:devel/rubygem-rubocop-rspec \
		rubygem-sqlite3>=0:databases/rubygem-sqlite3

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/ruby_language_server

.include <bsd.port.mk>
