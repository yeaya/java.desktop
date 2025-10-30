#include <sun/print/OpenBook.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Printable.h>
#include <jcpp.h>

#undef UNKNOWN_NUMBER_OF_PAGES

using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$FieldInfo _OpenBook_FieldInfo_[] = {
	{"mFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(OpenBook, mFormat)},
	{"mPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(OpenBook, mPainter)},
	{}
};

$MethodInfo _OpenBook_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(static_cast<void(OpenBook::*)($PageFormat*,$Printable*)>(&OpenBook::init$))},
	{"getNumberOfPages", "()I", nullptr, $PUBLIC},
	{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC},
	{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{}
};

$ClassInfo _OpenBook_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.OpenBook",
	"java.lang.Object",
	"java.awt.print.Pageable",
	_OpenBook_FieldInfo_,
	_OpenBook_MethodInfo_
};

$Object* allocate$OpenBook($Class* clazz) {
	return $of($alloc(OpenBook));
}

void OpenBook::init$($PageFormat* format, $Printable* painter) {
	$set(this, mFormat, format);
	$set(this, mPainter, painter);
}

int32_t OpenBook::getNumberOfPages() {
	return $Pageable::UNKNOWN_NUMBER_OF_PAGES;
}

$PageFormat* OpenBook::getPageFormat(int32_t pageIndex) {
	return this->mFormat;
}

$Printable* OpenBook::getPrintable(int32_t pageIndex) {
	return this->mPainter;
}

OpenBook::OpenBook() {
}

$Class* OpenBook::load$($String* name, bool initialize) {
	$loadClass(OpenBook, name, initialize, &_OpenBook_ClassInfo_, allocate$OpenBook);
	return class$;
}

$Class* OpenBook::class$ = nullptr;

	} // print
} // sun