#include <java/awt/print/Book$BookPage.h>

#include <java/awt/print/Book.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Book = ::java::awt::print::Book;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _Book$BookPage_FieldInfo_[] = {
	{"this$0", "Ljava/awt/print/Book;", nullptr, $FINAL | $SYNTHETIC, $field(Book$BookPage, this$0)},
	{"mFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(Book$BookPage, mFormat)},
	{"mPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(Book$BookPage, mPainter)},
	{}
};

$MethodInfo _Book$BookPage_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/print/Book;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, 0, $method(static_cast<void(Book$BookPage::*)($Book*,$Printable*,$PageFormat*)>(&Book$BookPage::init$))},
	{"getPageFormat", "()Ljava/awt/print/PageFormat;", nullptr, 0},
	{"getPrintable", "()Ljava/awt/print/Printable;", nullptr, 0},
	{}
};

$InnerClassInfo _Book$BookPage_InnerClassesInfo_[] = {
	{"java.awt.print.Book$BookPage", "java.awt.print.Book", "BookPage", $PRIVATE},
	{}
};

$ClassInfo _Book$BookPage_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.print.Book$BookPage",
	"java.lang.Object",
	nullptr,
	_Book$BookPage_FieldInfo_,
	_Book$BookPage_MethodInfo_,
	nullptr,
	nullptr,
	_Book$BookPage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.print.Book"
};

$Object* allocate$Book$BookPage($Class* clazz) {
	return $of($alloc(Book$BookPage));
}

void Book$BookPage::init$($Book* this$0, $Printable* painter, $PageFormat* format) {
	$set(this, this$0, this$0);
	if (painter == nullptr || format == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mFormat, format);
	$set(this, mPainter, painter);
}

$Printable* Book$BookPage::getPrintable() {
	return this->mPainter;
}

$PageFormat* Book$BookPage::getPageFormat() {
	return this->mFormat;
}

Book$BookPage::Book$BookPage() {
}

$Class* Book$BookPage::load$($String* name, bool initialize) {
	$loadClass(Book$BookPage, name, initialize, &_Book$BookPage_ClassInfo_, allocate$Book$BookPage);
	return class$;
}

$Class* Book$BookPage::class$ = nullptr;

		} // print
	} // awt
} // java