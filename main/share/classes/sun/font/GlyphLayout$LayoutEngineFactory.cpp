#include <sun/font/GlyphLayout$LayoutEngineFactory.h>

#include <sun/font/Font2D.h>
#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <sun/font/GlyphLayout$LayoutEngineKey.h>
#include <sun/font/GlyphLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _GlyphLayout$LayoutEngineFactory_MethodInfo_[] = {
	{"getEngine", "(Lsun/font/Font2D;II)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEngine", "(Lsun/font/GlyphLayout$LayoutEngineKey;)Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GlyphLayout$LayoutEngineFactory_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$LayoutEngineFactory", "sun.font.GlyphLayout", "LayoutEngineFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GlyphLayout$LayoutEngineFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.GlyphLayout$LayoutEngineFactory",
	nullptr,
	nullptr,
	nullptr,
	_GlyphLayout$LayoutEngineFactory_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$LayoutEngineFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$LayoutEngineFactory($Class* clazz) {
	return $of($alloc(GlyphLayout$LayoutEngineFactory));
}

$Class* GlyphLayout$LayoutEngineFactory::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$LayoutEngineFactory, name, initialize, &_GlyphLayout$LayoutEngineFactory_ClassInfo_, allocate$GlyphLayout$LayoutEngineFactory);
	return class$;
}

$Class* GlyphLayout$LayoutEngineFactory::class$ = nullptr;

	} // font
} // sun