#include <sun/swing/text/CountingPrintable.h>

#include <jcpp.h>

using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace text {

$MethodInfo _CountingPrintable_MethodInfo_[] = {
	{"getNumberOfPages", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CountingPrintable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.text.CountingPrintable",
	nullptr,
	"java.awt.print.Printable",
	nullptr,
	_CountingPrintable_MethodInfo_
};

$Object* allocate$CountingPrintable($Class* clazz) {
	return $of($alloc(CountingPrintable));
}

$Class* CountingPrintable::load$($String* name, bool initialize) {
	$loadClass(CountingPrintable, name, initialize, &_CountingPrintable_ClassInfo_, allocate$CountingPrintable);
	return class$;
}

$Class* CountingPrintable::class$ = nullptr;

		} // text
	} // swing
} // sun