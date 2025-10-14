#include <sun/java2d/pipe/GeneralCompositePipe$TileContext.h>

#include <java/awt/CompositeContext.h>
#include <java/awt/PaintContext.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GeneralCompositePipe.h>
#include <jcpp.h>

using $CompositeContext = ::java::awt::CompositeContext;
using $PaintContext = ::java::awt::PaintContext;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GeneralCompositePipe = ::sun::java2d::pipe::GeneralCompositePipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _GeneralCompositePipe$TileContext_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/GeneralCompositePipe;", nullptr, $FINAL | $SYNTHETIC, $field(GeneralCompositePipe$TileContext, this$0)},
	{"sunG2D", "Lsun/java2d/SunGraphics2D;", nullptr, 0, $field(GeneralCompositePipe$TileContext, sunG2D)},
	{"paintCtxt", "Ljava/awt/PaintContext;", nullptr, 0, $field(GeneralCompositePipe$TileContext, paintCtxt)},
	{"compCtxt", "Ljava/awt/CompositeContext;", nullptr, 0, $field(GeneralCompositePipe$TileContext, compCtxt)},
	{"compModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(GeneralCompositePipe$TileContext, compModel)},
	{"pipeState", "Ljava/lang/Object;", nullptr, 0, $field(GeneralCompositePipe$TileContext, pipeState)},
	{}
};

$MethodInfo _GeneralCompositePipe$TileContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/GeneralCompositePipe;Lsun/java2d/SunGraphics2D;Ljava/awt/PaintContext;Ljava/awt/CompositeContext;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralCompositePipe$TileContext::*)($GeneralCompositePipe*,$SunGraphics2D*,$PaintContext*,$CompositeContext*,$ColorModel*)>(&GeneralCompositePipe$TileContext::init$))},
	{}
};

$InnerClassInfo _GeneralCompositePipe$TileContext_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.GeneralCompositePipe$TileContext", "sun.java2d.pipe.GeneralCompositePipe", "TileContext", 0},
	{}
};

$ClassInfo _GeneralCompositePipe$TileContext_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.GeneralCompositePipe$TileContext",
	"java.lang.Object",
	nullptr,
	_GeneralCompositePipe$TileContext_FieldInfo_,
	_GeneralCompositePipe$TileContext_MethodInfo_,
	nullptr,
	nullptr,
	_GeneralCompositePipe$TileContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.GeneralCompositePipe"
};

$Object* allocate$GeneralCompositePipe$TileContext($Class* clazz) {
	return $of($alloc(GeneralCompositePipe$TileContext));
}

void GeneralCompositePipe$TileContext::init$($GeneralCompositePipe* this$0, $SunGraphics2D* sg, $PaintContext* pCtx, $CompositeContext* cCtx, $ColorModel* cModel) {
	$set(this, this$0, this$0);
	$set(this, sunG2D, sg);
	$set(this, paintCtxt, pCtx);
	$set(this, compCtxt, cCtx);
	$set(this, compModel, cModel);
}

GeneralCompositePipe$TileContext::GeneralCompositePipe$TileContext() {
}

$Class* GeneralCompositePipe$TileContext::load$($String* name, bool initialize) {
	$loadClass(GeneralCompositePipe$TileContext, name, initialize, &_GeneralCompositePipe$TileContext_ClassInfo_, allocate$GeneralCompositePipe$TileContext);
	return class$;
}

$Class* GeneralCompositePipe$TileContext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun