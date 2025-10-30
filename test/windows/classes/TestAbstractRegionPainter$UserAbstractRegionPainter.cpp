#include <TestAbstractRegionPainter$UserAbstractRegionPainter.h>

#include <TestAbstractRegionPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

using $TestAbstractRegionPainter = ::TestAbstractRegionPainter;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

$MethodInfo _TestAbstractRegionPainter$UserAbstractRegionPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAbstractRegionPainter$UserAbstractRegionPainter::*)()>(&TestAbstractRegionPainter$UserAbstractRegionPainter::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED},
	{"getUserComponentColor", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/awt/Color;FFI)Ljava/awt/Color;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestAbstractRegionPainter$UserAbstractRegionPainter_InnerClassesInfo_[] = {
	{"TestAbstractRegionPainter$UserAbstractRegionPainter", "TestAbstractRegionPainter", "UserAbstractRegionPainter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestAbstractRegionPainter$UserAbstractRegionPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAbstractRegionPainter$UserAbstractRegionPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	nullptr,
	_TestAbstractRegionPainter$UserAbstractRegionPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TestAbstractRegionPainter$UserAbstractRegionPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestAbstractRegionPainter"
};

$Object* allocate$TestAbstractRegionPainter$UserAbstractRegionPainter($Class* clazz) {
	return $of($alloc(TestAbstractRegionPainter$UserAbstractRegionPainter));
}

void TestAbstractRegionPainter$UserAbstractRegionPainter::init$() {
	$AbstractRegionPainter::init$();
}

$Color* TestAbstractRegionPainter$UserAbstractRegionPainter::getUserComponentColor($JComponent* c, $String* property, $Color* defaultColor, float saturationOffset, float brightnessOffset, int32_t alphaOffset) {
	return getComponentColor(c, property, defaultColor, saturationOffset, brightnessOffset, alphaOffset);
}

$AbstractRegionPainter$PaintContext* TestAbstractRegionPainter$UserAbstractRegionPainter::getPaintContext() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

void TestAbstractRegionPainter$UserAbstractRegionPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

TestAbstractRegionPainter$UserAbstractRegionPainter::TestAbstractRegionPainter$UserAbstractRegionPainter() {
}

$Class* TestAbstractRegionPainter$UserAbstractRegionPainter::load$($String* name, bool initialize) {
	$loadClass(TestAbstractRegionPainter$UserAbstractRegionPainter, name, initialize, &_TestAbstractRegionPainter$UserAbstractRegionPainter_ClassInfo_, allocate$TestAbstractRegionPainter$UserAbstractRegionPainter);
	return class$;
}

$Class* TestAbstractRegionPainter$UserAbstractRegionPainter::class$ = nullptr;