PORTNAME=	tiempo
DISTVERSION=	1.9.0
PORTREVISION=	10
CATEGORIES=	sysutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Command-line time tracker
WWW=		https://tiempo.categulario.xyz/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo

USE_GITLAB=	yes
GL_ACCOUNT=	categulario
GL_PROJECT=	tiempo-rs
GL_TAGNAME=	87ae271a3f925ad24ced8729604d60b4547f6acb

CARGO_CRATES=	ahash-0.7.6 \
		ahash-0.8.3 \
		aho-corasick-1.0.2 \
		allocator-api2-0.2.15 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		ansi_term-0.12.1 \
		anstream-0.3.2 \
		anstyle-1.0.1 \
		anstyle-parse-0.2.1 \
		anstyle-query-1.0.0 \
		anstyle-wincon-1.0.1 \
		atty-0.2.14 \
		autocfg-0.1.8 \
		autocfg-1.1.0 \
		bitflags-1.3.2 \
		bumpalo-3.13.0 \
		cc-1.0.79 \
		cfg-if-1.0.0 \
		chrono-0.4.26 \
		clap-4.3.5 \
		clap_builder-4.3.5 \
		clap_derive-4.3.2 \
		clap_lex-0.5.0 \
		cloudabi-0.0.3 \
		colorchoice-1.0.0 \
		core-foundation-sys-0.8.4 \
		csv-1.2.2 \
		csv-core-0.1.10 \
		ctor-0.1.26 \
		diff-0.1.13 \
		directories-3.0.2 \
		dirs-sys-0.3.7 \
		either-1.8.1 \
		errno-0.3.1 \
		errno-dragonfly-0.1.2 \
		fallible-iterator-0.2.0 \
		fallible-streaming-iterator-0.1.9 \
		fastrand-1.9.0 \
		fuchsia-cprng-0.1.1 \
		getrandom-0.2.10 \
		hashbrown-0.12.3 \
		hashbrown-0.14.0 \
		hashlink-0.8.3 \
		heck-0.4.1 \
		hermit-abi-0.1.19 \
		hermit-abi-0.3.1 \
		hostname-0.3.1 \
		iana-time-zone-0.1.57 \
		iana-time-zone-haiku-0.1.2 \
		indexmap-1.9.3 \
		instant-0.1.12 \
		io-lifetimes-1.0.11 \
		is-terminal-0.4.7 \
		is_executable-1.0.1 \
		isolang-1.0.0 \
		itertools-0.10.5 \
		itoa-1.0.6 \
		js-sys-0.3.64 \
		lazy_static-1.4.0 \
		libc-0.2.146 \
		libsqlite3-sys-0.25.2 \
		linux-raw-sys-0.3.8 \
		log-0.4.19 \
		match_cfg-0.1.0 \
		memchr-2.5.0 \
		num-traits-0.2.15 \
		once_cell-1.18.0 \
		output_vt100-0.1.3 \
		phf-0.7.24 \
		phf_codegen-0.7.24 \
		phf_generator-0.7.24 \
		phf_shared-0.7.24 \
		pkg-config-0.3.27 \
		pretty_assertions-1.3.0 \
		proc-macro2-1.0.60 \
		quote-1.0.28 \
		rand-0.6.5 \
		rand_chacha-0.1.1 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_hc-0.1.0 \
		rand_isaac-0.1.1 \
		rand_jitter-0.1.4 \
		rand_os-0.1.3 \
		rand_pcg-0.1.2 \
		rand_xorshift-0.1.1 \
		rdrand-0.4.0 \
		redox_syscall-0.2.16 \
		redox_syscall-0.3.5 \
		redox_users-0.4.3 \
		regex-1.8.4 \
		regex-syntax-0.7.2 \
		rusqlite-0.28.0 \
		rustix-0.37.20 \
		rustversion-1.0.12 \
		ryu-1.0.13 \
		serde-1.0.164 \
		serde_derive-1.0.164 \
		serde_json-1.0.97 \
		serde_yaml-0.9.21 \
		siphasher-0.2.3 \
		smallvec-1.10.0 \
		smawk-0.3.1 \
		strsim-0.10.0 \
		strum-0.24.1 \
		strum_macros-0.24.3 \
		syn-1.0.109 \
		syn-2.0.18 \
		tempfile-3.6.0 \
		textwrap-0.14.2 \
		thiserror-1.0.40 \
		thiserror-impl-1.0.40 \
		time-0.1.45 \
		timeago-0.3.1 \
		toml-0.5.11 \
		unicode-ident-1.0.9 \
		unicode-linebreak-0.1.4 \
		unicode-width-0.1.10 \
		unsafe-libyaml-0.2.8 \
		utf8parse-0.2.1 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.87 \
		wasm-bindgen-backend-0.2.87 \
		wasm-bindgen-macro-0.2.87 \
		wasm-bindgen-macro-support-0.2.87 \
		wasm-bindgen-shared-0.2.87 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.48.0 \
		windows-sys-0.48.0 \
		windows-targets-0.48.0 \
		windows_aarch64_gnullvm-0.48.0 \
		windows_aarch64_msvc-0.48.0 \
		windows_i686_gnu-0.48.0 \
		windows_i686_msvc-0.48.0 \
		windows_x86_64_gnu-0.48.0 \
		windows_x86_64_gnullvm-0.48.0 \
		windows_x86_64_msvc-0.48.0 \
		yansi-0.5.1

PLIST_FILES=	bin/t

.include <bsd.port.mk>
