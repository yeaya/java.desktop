#include <PaintContextScaleValidation.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;

$MethodInfo _PaintContextScaleValidation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PaintContextScaleValidation::*)()>(&PaintContextScaleValidation::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PaintContextScaleValidation::main))},
	{"test", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(PaintContextScaleValidation::*)(double,double)>(&PaintContextScaleValidation::test))},
	{}
};

$ClassInfo _PaintContextScaleValidation_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"PaintContextScaleValidation",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	nullptr,
	_PaintContextScaleValidation_MethodInfo_
};

$Object* allocate$PaintContextScaleValidation($Class* clazz) {
	return $of($alloc(PaintContextScaleValidation));
}

void PaintContextScaleValidation::init$() {
	$AbstractRegionPainter::init$();
}

void PaintContextScaleValidation::main($StringArray* args) {
	$init(PaintContextScaleValidation);
	$var(PaintContextScaleValidation, t, $new(PaintContextScaleValidation));
	t->test((double)0, (double)0);
	t->test((double)0, (double)1);
	t->test((double)1, (double)0);
}

void PaintContextScaleValidation::test(double maxH, double maxV) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Insets, var$0, $new($Insets, 1, 1, 1, 1));
		$new($AbstractRegionPainter$PaintContext, var$0, $$new($Dimension, 1, 1), false, nullptr, maxH, maxV);
	} catch ($IllegalArgumentException& ignored) {
		return;
	}
	$throwNew($RuntimeException, "IllegalArgumentException was not thrown"_s);
}

$AbstractRegionPainter$PaintContext* PaintContextScaleValidation::getPaintContext() {
	return nullptr;
}

void PaintContextScaleValidation::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
}

PaintContextScaleValidation::PaintContextScaleValidation() {
}

$Class* PaintContextScaleValidation::load$($String* name, bool initialize) {
	$loadClass(PaintContextScaleValidation, name, initialize, &_PaintContextScaleValidation_ClassInfo_, allocate$PaintContextScaleValidation);
	return class$;
}

$Class* PaintContextScaleValidation::class$ = nullptr;