#include <sun/lwawt/macosx/CPrinterJob$6.h>

#include <java/awt/Graphics.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE

using $Rectangle2DArray = $Array<::java::awt::geom::Rectangle2D>;
using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$6_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, this$0)},
	{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, val$pageIndex)},
	{"val$pageFormat", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, val$pageFormat)},
	{"val$graphics", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, val$graphics)},
	{"val$printable", "Ljava/awt/print/Printable;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, val$printable)},
	{"val$ret", "[Ljava/awt/geom/Rectangle2D;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$6, val$ret)},
	{}
};

$MethodInfo _CPrinterJob$6_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;[Ljava/awt/geom/Rectangle2D;Ljava/awt/print/Printable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)V", "()V", 0, $method(static_cast<void(CPrinterJob$6::*)($CPrinterJob*,$Rectangle2DArray*,$Printable*,$Graphics*,$PageFormat*,int32_t)>(&CPrinterJob$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$6_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"printAndGetPageFormatArea",
	"(Ljava/awt/print/Printable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)Ljava/awt/geom/Rectangle2D;"
};

$InnerClassInfo _CPrinterJob$6_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPrinterJob$6_FieldInfo_,
	_CPrinterJob$6_MethodInfo_,
	nullptr,
	&_CPrinterJob$6_EnclosingMethodInfo_,
	_CPrinterJob$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$6($Class* clazz) {
	return $of($alloc(CPrinterJob$6));
}

void CPrinterJob$6::init$($CPrinterJob* this$0, $Rectangle2DArray* val$ret, $Printable* val$printable, $Graphics* val$graphics, $PageFormat* val$pageFormat, int32_t val$pageIndex) {
	$set(this, this$0, this$0);
	$set(this, val$ret, val$ret);
	$set(this, val$printable, val$printable);
	$set(this, val$graphics, val$graphics);
	$set(this, val$pageFormat, val$pageFormat);
	this->val$pageIndex = val$pageIndex;
}

void CPrinterJob$6::run() {
	$synchronized(this->val$ret) {
		try {
			int32_t pageResult = $nc(this->val$printable)->print(this->val$graphics, this->val$pageFormat, this->val$pageIndex);
			if (pageResult != $Printable::NO_SUCH_PAGE) {
				$nc(this->val$ret)->set(0, $(this->this$0->getPageFormatArea(this->val$pageFormat)));
			}
		} catch ($Exception& e) {
		}
	}
}

CPrinterJob$6::CPrinterJob$6() {
}

$Class* CPrinterJob$6::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$6, name, initialize, &_CPrinterJob$6_ClassInfo_, allocate$CPrinterJob$6);
	return class$;
}

$Class* CPrinterJob$6::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun