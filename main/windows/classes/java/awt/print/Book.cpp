#include <java/awt/print/Book.h>

#include <java/awt/print/Book$BookPage.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Book$BookPage = ::java::awt::print::Book$BookPage;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _Book_FieldInfo_[] = {
	{"mPages", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/print/Book$BookPage;>;", $PRIVATE, $field(Book, mPages)},
	{}
};

$MethodInfo _Book_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Book::*)()>(&Book::init$))},
	{"append", "(Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, $PUBLIC},
	{"append", "(Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;I)V", nullptr, $PUBLIC},
	{"getNumberOfPages", "()I", nullptr, $PUBLIC},
	{"getPage", "(I)Ljava/awt/print/Book$BookPage;", nullptr, $PRIVATE, $method(static_cast<$Book$BookPage*(Book::*)(int32_t)>(&Book::getPage)), "java.lang.ArrayIndexOutOfBoundsException"},
	{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"setPage", "(ILjava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{}
};

$InnerClassInfo _Book_InnerClassesInfo_[] = {
	{"java.awt.print.Book$BookPage", "java.awt.print.Book", "BookPage", $PRIVATE},
	{}
};

$ClassInfo _Book_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.print.Book",
	"java.lang.Object",
	"java.awt.print.Pageable",
	_Book_FieldInfo_,
	_Book_MethodInfo_,
	nullptr,
	nullptr,
	_Book_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.print.Book$BookPage"
};

$Object* allocate$Book($Class* clazz) {
	return $of($alloc(Book));
}

void Book::init$() {
	$set(this, mPages, $new($Vector));
}

int32_t Book::getNumberOfPages() {
	return $nc(this->mPages)->size();
}

$PageFormat* Book::getPageFormat(int32_t pageIndex) {
	return $nc($(getPage(pageIndex)))->getPageFormat();
}

$Printable* Book::getPrintable(int32_t pageIndex) {
	return $nc($(getPage(pageIndex)))->getPrintable();
}

void Book::setPage(int32_t pageIndex, $Printable* painter, $PageFormat* page) {
	if (painter == nullptr) {
		$throwNew($NullPointerException, "painter is null"_s);
	}
	if (page == nullptr) {
		$throwNew($NullPointerException, "page is null"_s);
	}
	$nc(this->mPages)->setElementAt($$new($Book$BookPage, this, painter, page), pageIndex);
}

void Book::append($Printable* painter, $PageFormat* page) {
	$nc(this->mPages)->addElement($$new($Book$BookPage, this, painter, page));
}

void Book::append($Printable* painter, $PageFormat* page, int32_t numPages) {
	$var($Book$BookPage, bookPage, $new($Book$BookPage, this, painter, page));
	int32_t pageIndex = $nc(this->mPages)->size();
	int32_t newSize = pageIndex + numPages;
	$nc(this->mPages)->setSize(newSize);
	for (int32_t i = pageIndex; i < newSize; ++i) {
		$nc(this->mPages)->setElementAt(bookPage, i);
	}
}

$Book$BookPage* Book::getPage(int32_t pageIndex) {
	return $cast($Book$BookPage, $nc(this->mPages)->elementAt(pageIndex));
}

Book::Book() {
}

$Class* Book::load$($String* name, bool initialize) {
	$loadClass(Book, name, initialize, &_Book_ClassInfo_, allocate$Book);
	return class$;
}

$Class* Book::class$ = nullptr;

		} // print
	} // awt
} // java