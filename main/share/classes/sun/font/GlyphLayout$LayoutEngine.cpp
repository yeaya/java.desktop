#include <sun/font/GlyphLayout$LayoutEngine.h>

#include <java/awt/geom/Point2D$Float.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/GlyphLayout$GVData.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/TextRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _GlyphLayout$LayoutEngine_MethodInfo_[] = {
	{"layout", "(Lsun/font/FontStrikeDesc;[FFIILsun/font/TextRecord;ILjava/awt/geom/Point2D$Float;Lsun/font/GlyphLayout$GVData;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GlyphLayout$LayoutEngine_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$LayoutEngine", "sun.font.GlyphLayout", "LayoutEngine", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GlyphLayout$LayoutEngine_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.GlyphLayout$LayoutEngine",
	nullptr,
	nullptr,
	nullptr,
	_GlyphLayout$LayoutEngine_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$LayoutEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$LayoutEngine($Class* clazz) {
	return $of($alloc(GlyphLayout$LayoutEngine));
}

$Class* GlyphLayout$LayoutEngine::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$LayoutEngine, name, initialize, &_GlyphLayout$LayoutEngine_ClassInfo_, allocate$GlyphLayout$LayoutEngine);
	return class$;
}

$Class* GlyphLayout$LayoutEngine::class$ = nullptr;

	} // font
} // sun