#include <java/awt/print/PageFormat.h>

#include <java/awt/print/Paper.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LANDSCAPE
#undef PORTRAIT
#undef REVERSE_LANDSCAPE

using $Paper = ::java::awt::print::Paper;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _PageFormat_FieldInfo_[] = {
	{"LANDSCAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PageFormat, LANDSCAPE)},
	{"PORTRAIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PageFormat, PORTRAIT)},
	{"REVERSE_LANDSCAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PageFormat, REVERSE_LANDSCAPE)},
	{"mPaper", "Ljava/awt/print/Paper;", nullptr, $PRIVATE, $field(PageFormat, mPaper)},
	{"mOrientation", "I", nullptr, $PRIVATE, $field(PageFormat, mOrientation)},
	{}
};

$MethodInfo _PageFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageFormat::*)()>(&PageFormat::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getImageableHeight", "()D", nullptr, $PUBLIC},
	{"getImageableWidth", "()D", nullptr, $PUBLIC},
	{"getImageableX", "()D", nullptr, $PUBLIC},
	{"getImageableY", "()D", nullptr, $PUBLIC},
	{"getMatrix", "()[D", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getPaper", "()Ljava/awt/print/Paper;", nullptr, $PUBLIC},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setPaper", "(Ljava/awt/print/Paper;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PageFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.PageFormat",
	"java.lang.Object",
	"java.lang.Cloneable",
	_PageFormat_FieldInfo_,
	_PageFormat_MethodInfo_
};

$Object* allocate$PageFormat($Class* clazz) {
	return $of($alloc(PageFormat));
}

void PageFormat::init$() {
	this->mOrientation = PageFormat::PORTRAIT;
	$set(this, mPaper, $new($Paper));
}

$Object* PageFormat::clone() {
	$useLocalCurrentObjectStackCache();
	$var(PageFormat, newPage, nullptr);
	try {
		$assign(newPage, $cast(PageFormat, $Cloneable::clone()));
		$set($nc(newPage), mPaper, $cast($Paper, $nc(this->mPaper)->clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		e->printStackTrace();
		$assign(newPage, nullptr);
	}
	return $of(newPage);
}

double PageFormat::getWidth() {
	double width = 0.0;
	int32_t orientation = getOrientation();
	if (orientation == PageFormat::PORTRAIT) {
		width = $nc(this->mPaper)->getWidth();
	} else {
		width = $nc(this->mPaper)->getHeight();
	}
	return width;
}

double PageFormat::getHeight() {
	double height = 0.0;
	int32_t orientation = getOrientation();
	if (orientation == PageFormat::PORTRAIT) {
		height = $nc(this->mPaper)->getHeight();
	} else {
		height = $nc(this->mPaper)->getWidth();
	}
	return height;
}

double PageFormat::getImageableX() {
	double x = 0.0;
	switch (getOrientation()) {
	case PageFormat::LANDSCAPE:
		{
			double var$0 = $nc(this->mPaper)->getHeight();
			double var$2 = $nc(this->mPaper)->getImageableY();
			double var$1 = (var$2 + $nc(this->mPaper)->getImageableHeight());
			x = var$0 - var$1;
			break;
		}
	case PageFormat::PORTRAIT:
		{
			x = $nc(this->mPaper)->getImageableX();
			break;
		}
	case PageFormat::REVERSE_LANDSCAPE:
		{
			x = $nc(this->mPaper)->getImageableY();
			break;
		}
	default:
		{
			$throwNew($InternalError, "unrecognized orientation"_s);
		}
	}
	return x;
}

double PageFormat::getImageableY() {
	double y = 0.0;
	switch (getOrientation()) {
	case PageFormat::LANDSCAPE:
		{
			y = $nc(this->mPaper)->getImageableX();
			break;
		}
	case PageFormat::PORTRAIT:
		{
			y = $nc(this->mPaper)->getImageableY();
			break;
		}
	case PageFormat::REVERSE_LANDSCAPE:
		{
			double var$0 = $nc(this->mPaper)->getWidth();
			double var$2 = $nc(this->mPaper)->getImageableX();
			double var$1 = (var$2 + $nc(this->mPaper)->getImageableWidth());
			y = var$0 - var$1;
			break;
		}
	default:
		{
			$throwNew($InternalError, "unrecognized orientation"_s);
		}
	}
	return y;
}

double PageFormat::getImageableWidth() {
	double width = 0.0;
	if (getOrientation() == PageFormat::PORTRAIT) {
		width = $nc(this->mPaper)->getImageableWidth();
	} else {
		width = $nc(this->mPaper)->getImageableHeight();
	}
	return width;
}

double PageFormat::getImageableHeight() {
	double height = 0.0;
	if (getOrientation() == PageFormat::PORTRAIT) {
		height = $nc(this->mPaper)->getImageableHeight();
	} else {
		height = $nc(this->mPaper)->getImageableWidth();
	}
	return height;
}

$Paper* PageFormat::getPaper() {
	return $cast($Paper, $nc(this->mPaper)->clone());
}

void PageFormat::setPaper($Paper* paper) {
	$set(this, mPaper, $cast($Paper, $nc(paper)->clone()));
}

void PageFormat::setOrientation(int32_t orientation) {
	if (0 <= orientation && orientation <= PageFormat::REVERSE_LANDSCAPE) {
		this->mOrientation = orientation;
	} else {
		$throwNew($IllegalArgumentException);
	}
}

int32_t PageFormat::getOrientation() {
	return this->mOrientation;
}

$doubles* PageFormat::getMatrix() {
	$var($doubles, matrix, $new($doubles, 6));
	switch (this->mOrientation) {
	case PageFormat::LANDSCAPE:
		{
			matrix->set(0, (double)0);
			matrix->set(1, (double)-1);
			matrix->set(2, (double)1);
			matrix->set(3, (double)0);
			matrix->set(4, (double)0);
			matrix->set(5, $nc(this->mPaper)->getHeight());
			break;
		}
	case PageFormat::PORTRAIT:
		{
			matrix->set(0, (double)1);
			matrix->set(1, (double)0);
			matrix->set(2, (double)0);
			matrix->set(3, (double)1);
			matrix->set(4, (double)0);
			matrix->set(5, (double)0);
			break;
		}
	case PageFormat::REVERSE_LANDSCAPE:
		{
			matrix->set(0, (double)0);
			matrix->set(1, (double)1);
			matrix->set(2, (double)-1);
			matrix->set(3, (double)0);
			matrix->set(4, $nc(this->mPaper)->getWidth());
			matrix->set(5, (double)0);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
	return matrix;
}

PageFormat::PageFormat() {
}

$Class* PageFormat::load$($String* name, bool initialize) {
	$loadClass(PageFormat, name, initialize, &_PageFormat_ClassInfo_, allocate$PageFormat);
	return class$;
}

$Class* PageFormat::class$ = nullptr;

		} // print
	} // awt
} // java