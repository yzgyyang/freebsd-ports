--- src/third_party/mozjs-60/platform/ppc64le/freebsd/build/Unified_cpp_js_src37.cpp.orig	2020-11-24 21:44:47 UTC
+++ src/third_party/mozjs-60/platform/ppc64le/freebsd/build/Unified_cpp_js_src37.cpp
@@ -0,0 +1,55 @@
+#define MOZ_UNIFIED_BUILD
+#include "vm/TypeInference.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/TypeInference.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/TypeInference.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/TypedArrayObject.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/TypedArrayObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/TypedArrayObject.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/UbiNode.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/UbiNode.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/UbiNode.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/UbiNodeCensus.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/UbiNodeCensus.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/UbiNodeCensus.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/UbiNodeShortestPaths.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/UbiNodeShortestPaths.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/UbiNodeShortestPaths.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
+#include "vm/UnboxedObject.cpp"
+#ifdef PL_ARENA_CONST_ALIGN_MASK
+#error "vm/UnboxedObject.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
+#undef PL_ARENA_CONST_ALIGN_MASK
+#endif
+#ifdef INITGUID
+#error "vm/UnboxedObject.cpp defines INITGUID, so it cannot be built in unified mode."
+#undef INITGUID
+#endif
\ No newline at end of file
