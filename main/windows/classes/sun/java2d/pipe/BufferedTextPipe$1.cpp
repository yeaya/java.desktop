#include <sun/java2d/pipe/BufferedTextPipe$1.h>

#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedTextPipe$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/pipe/BufferedTextPipe;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, this$0)},
	{"val$images", "[J", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$images)},
	{"val$glyphListOrigY", "F", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$glyphListOrigY)},
	{"val$glyphListOrigX", "F", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$glyphListOrigX)},
	{"val$sg2d", "Lsun/java2d/SunGraphics2D;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$sg2d)},
	{"val$gl", "Lsun/font/GlyphList;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$gl)},
	{"val$totalGlyphs", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$totalGlyphs)},
	{}
};

$MethodInfo _BufferedTextPipe$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/BufferedTextPipe;ILsun/font/GlyphList;Lsun/java2d/SunGraphics2D;FF[J)V", "()V", 0, $method(static_cast<void(BufferedTextPipe$1::*)($BufferedTextPipe*,int32_t,$GlyphList*,$SunGraphics2D*,float,float,$longs*)>(&BufferedTextPipe$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BufferedTextPipe$1_EnclosingMethodInfo_ = {
	"sun.java2d.pipe.BufferedTextPipe",
	"enqueueGlyphList",
	"(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V"
};

$InnerClassInfo _BufferedTextPipe$1_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.BufferedTextPipe$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedTextPipe$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.BufferedTextPipe$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_BufferedTextPipe$1_FieldInfo_,
	_BufferedTextPipe$1_MethodInfo_,
	nullptr,
	&_BufferedTextPipe$1_EnclosingMethodInfo_,
	_BufferedTextPipe$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.BufferedTextPipe"
};

$Object* allocate$BufferedTextPipe$1($Class* clazz) {
	return $of($alloc(BufferedTextPipe$1));
}

void BufferedTextPipe$1::init$($BufferedTextPipe* this$0, int32_t val$totalGlyphs, $GlyphList* val$gl, $SunGraphics2D* val$sg2d, float val$glyphListOrigX, float val$glyphListOrigY, $longs* val$images) {
	$set(this, this$0, this$0);
	this->val$totalGlyphs = val$totalGlyphs;
	$set(this, val$gl, val$gl);
	$set(this, val$sg2d, val$sg2d);
	this->val$glyphListOrigX = val$glyphListOrigX;
	this->val$glyphListOrigY = val$glyphListOrigY;
	$set(this, val$images, val$images);
}

void BufferedTextPipe$1::run() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = this->val$totalGlyphs;
	bool var$1 = $nc(this->val$gl)->usePositions();
	bool var$2 = $nc(this->val$gl)->isSubPixPos();
	bool var$3 = $nc(this->val$gl)->isRGBOrder();
	int32_t var$4 = $nc(this->val$sg2d)->lcdTextContrast;
	float var$5 = this->val$glyphListOrigX;
	float var$6 = this->val$glyphListOrigY;
	$var($longs, var$7, this->val$images);
	this->this$0->drawGlyphList(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $($nc(this->val$gl)->getPositions()));
}

BufferedTextPipe$1::BufferedTextPipe$1() {
}

$Class* BufferedTextPipe$1::load$($String* name, bool initialize) {
	$loadClass(BufferedTextPipe$1, name, initialize, &_BufferedTextPipe$1_ClassInfo_, allocate$BufferedTextPipe$1);
	return class$;
}

$Class* BufferedTextPipe$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun