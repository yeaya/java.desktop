#include <sun/font/XRGlyphCache$1.h>

#include <sun/font/XRGlyphCache.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRGlyphCache = ::sun::font::XRGlyphCache;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;

namespace sun {
	namespace font {

$FieldInfo _XRGlyphCache$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/XRGlyphCache;", nullptr, $FINAL | $SYNTHETIC, $field(XRGlyphCache$1, this$0)},
	{}
};

$MethodInfo _XRGlyphCache$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/XRGlyphCache;)V", nullptr, 0, $method(static_cast<void(XRGlyphCache$1::*)($XRGlyphCache*)>(&XRGlyphCache$1::init$))},
	{"compare", "(Lsun/font/XRGlyphCacheEntry;Lsun/font/XRGlyphCacheEntry;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _XRGlyphCache$1_EnclosingMethodInfo_ = {
	"sun.font.XRGlyphCache",
	"clearCache",
	"([Lsun/font/XRGlyphCacheEntry;)V"
};

$InnerClassInfo _XRGlyphCache$1_InnerClassesInfo_[] = {
	{"sun.font.XRGlyphCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XRGlyphCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.XRGlyphCache$1",
	"java.lang.Object",
	"java.util.Comparator",
	_XRGlyphCache$1_FieldInfo_,
	_XRGlyphCache$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/font/XRGlyphCacheEntry;>;",
	&_XRGlyphCache$1_EnclosingMethodInfo_,
	_XRGlyphCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.XRGlyphCache"
};

$Object* allocate$XRGlyphCache$1($Class* clazz) {
	return $of($alloc(XRGlyphCache$1));
}

void XRGlyphCache$1::init$($XRGlyphCache* this$0) {
	$set(this, this$0, this$0);
}

int32_t XRGlyphCache$1::compare($XRGlyphCacheEntry* e1, $XRGlyphCacheEntry* e2) {
	int32_t var$0 = $nc(e2)->getLastUsed();
	return var$0 - $nc(e1)->getLastUsed();
}

int32_t XRGlyphCache$1::compare(Object$* e1, Object$* e2) {
	return this->compare($cast($XRGlyphCacheEntry, e1), $cast($XRGlyphCacheEntry, e2));
}

XRGlyphCache$1::XRGlyphCache$1() {
}

$Class* XRGlyphCache$1::load$($String* name, bool initialize) {
	$loadClass(XRGlyphCache$1, name, initialize, &_XRGlyphCache$1_ClassInfo_, allocate$XRGlyphCache$1);
	return class$;
}

$Class* XRGlyphCache$1::class$ = nullptr;

	} // font
} // sun