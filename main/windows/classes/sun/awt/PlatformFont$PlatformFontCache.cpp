#include <sun/awt/PlatformFont$PlatformFontCache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/PlatformFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $PlatformFont = ::sun::awt::PlatformFont;

namespace sun {
	namespace awt {

$FieldInfo _PlatformFont$PlatformFontCache_FieldInfo_[] = {
	{"this$0", "Lsun/awt/PlatformFont;", nullptr, $FINAL | $SYNTHETIC, $field(PlatformFont$PlatformFontCache, this$0)},
	{"uniChar", "C", nullptr, 0, $field(PlatformFont$PlatformFontCache, uniChar)},
	{"fontDescriptor", "Lsun/awt/FontDescriptor;", nullptr, 0, $field(PlatformFont$PlatformFontCache, fontDescriptor)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(PlatformFont$PlatformFontCache, bb)},
	{}
};

$MethodInfo _PlatformFont$PlatformFontCache_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/PlatformFont;)V", nullptr, 0, $method(static_cast<void(PlatformFont$PlatformFontCache::*)($PlatformFont*)>(&PlatformFont$PlatformFontCache::init$))},
	{}
};

$InnerClassInfo _PlatformFont$PlatformFontCache_InnerClassesInfo_[] = {
	{"sun.awt.PlatformFont$PlatformFontCache", "sun.awt.PlatformFont", "PlatformFontCache", 0},
	{}
};

$ClassInfo _PlatformFont$PlatformFontCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.PlatformFont$PlatformFontCache",
	"java.lang.Object",
	nullptr,
	_PlatformFont$PlatformFontCache_FieldInfo_,
	_PlatformFont$PlatformFontCache_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformFont$PlatformFontCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.PlatformFont"
};

$Object* allocate$PlatformFont$PlatformFontCache($Class* clazz) {
	return $of($alloc(PlatformFont$PlatformFontCache));
}

void PlatformFont$PlatformFontCache::init$($PlatformFont* this$0) {
	$set(this, this$0, this$0);
	$set(this, bb, $ByteBuffer::allocate(4));
}

PlatformFont$PlatformFontCache::PlatformFont$PlatformFontCache() {
}

$Class* PlatformFont$PlatformFontCache::load$($String* name, bool initialize) {
	$loadClass(PlatformFont$PlatformFontCache, name, initialize, &_PlatformFont$PlatformFontCache_ClassInfo_, allocate$PlatformFont$PlatformFontCache);
	return class$;
}

$Class* PlatformFont$PlatformFontCache::class$ = nullptr;

	} // awt
} // sun