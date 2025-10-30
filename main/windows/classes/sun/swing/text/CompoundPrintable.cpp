#include <sun/swing/text/CompoundPrintable.h>

#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/util/Collection.h>
#include <java/util/Deque.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Queue.h>
#include <sun/swing/text/CountingPrintable.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Queue = ::java::util::Queue;
using $CountingPrintable = ::sun::swing::text::CountingPrintable;

namespace sun {
	namespace swing {
		namespace text {

$FieldInfo _CompoundPrintable_FieldInfo_[] = {
	{"printables", "Ljava/util/Queue;", "Ljava/util/Queue<Lsun/swing/text/CountingPrintable;>;", $PRIVATE | $FINAL, $field(CompoundPrintable, printables)},
	{"offset", "I", nullptr, $PRIVATE, $field(CompoundPrintable, offset)},
	{}
};

$MethodInfo _CompoundPrintable_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/swing/text/CountingPrintable;>;)V", $PUBLIC, $method(static_cast<void(CompoundPrintable::*)($List*)>(&CompoundPrintable::init$))},
	{"getNumberOfPages", "()I", nullptr, $PUBLIC},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{}
};

$ClassInfo _CompoundPrintable_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.text.CompoundPrintable",
	"java.lang.Object",
	"sun.swing.text.CountingPrintable",
	_CompoundPrintable_FieldInfo_,
	_CompoundPrintable_MethodInfo_
};

$Object* allocate$CompoundPrintable($Class* clazz) {
	return $of($alloc(CompoundPrintable));
}

void CompoundPrintable::init$($List* printables) {
	this->offset = 0;
	$set(this, printables, $new($LinkedList, printables));
}

int32_t CompoundPrintable::print($Graphics* graphics, $PageFormat* pf, int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = $Printable::NO_SUCH_PAGE;
	while ($nc(this->printables)->peek() != nullptr) {
		ret = $nc(($cast($CountingPrintable, $($nc(this->printables)->peek()))))->print(graphics, pf, pageIndex - this->offset);
		if (ret == $Printable::PAGE_EXISTS) {
			break;
		} else {
			this->offset += $nc(($cast($CountingPrintable, $($nc(this->printables)->poll()))))->getNumberOfPages();
		}
	}
	return ret;
}

int32_t CompoundPrintable::getNumberOfPages() {
	return this->offset;
}

CompoundPrintable::CompoundPrintable() {
}

$Class* CompoundPrintable::load$($String* name, bool initialize) {
	$loadClass(CompoundPrintable, name, initialize, &_CompoundPrintable_ClassInfo_, allocate$CompoundPrintable);
	return class$;
}

$Class* CompoundPrintable::class$ = nullptr;

		} // text
	} // swing
} // sun