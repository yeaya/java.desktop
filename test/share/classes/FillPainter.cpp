#include <FillPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Painter = ::javax::swing::Painter;

$FieldInfo _FillPainter_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE | $FINAL, $field(FillPainter, color)},
	{}
};

$MethodInfo _FillPainter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(FillPainter::*)($Color*)>(&FillPainter::init$))},
	{"paint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics2D;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _FillPainter_ClassInfo_ = {
	$ACC_SUPER,
	"FillPainter",
	"java.lang.Object",
	"javax.swing.Painter",
	_FillPainter_FieldInfo_,
	_FillPainter_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/Painter<Ljavax/swing/JComponent;>;"
};

$Object* allocate$FillPainter($Class* clazz) {
	return $of($alloc(FillPainter));
}

void FillPainter::init$($Color* c) {
	$set(this, color, c);
}

void FillPainter::paint($Graphics2D* g, $JComponent* object, int32_t width, int32_t height) {
	$nc(g)->setColor(this->color);
	g->fillRect(0, 0, width - 1, height - 1);
}

void FillPainter::paint($Graphics2D* g, Object$* object, int32_t width, int32_t height) {
	this->paint(g, $cast($JComponent, object), width, height);
}

FillPainter::FillPainter() {
}

$Class* FillPainter::load$($String* name, bool initialize) {
	$loadClass(FillPainter, name, initialize, &_FillPainter_ClassInfo_, allocate$FillPainter);
	return class$;
}

$Class* FillPainter::class$ = nullptr;