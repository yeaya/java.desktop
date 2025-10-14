#include <java/awt/print/Printable.h>

#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _Printable_FieldInfo_[] = {
	{"PAGE_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Printable, PAGE_EXISTS)},
	{"NO_SUCH_PAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Printable, NO_SUCH_PAGE)},
	{}
};

$MethodInfo _Printable_MethodInfo_[] = {
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{}
};

$ClassInfo _Printable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.print.Printable",
	nullptr,
	nullptr,
	_Printable_FieldInfo_,
	_Printable_MethodInfo_
};

$Object* allocate$Printable($Class* clazz) {
	return $of($alloc(Printable));
}

$Class* Printable::load$($String* name, bool initialize) {
	$loadClass(Printable, name, initialize, &_Printable_ClassInfo_, allocate$Printable);
	return class$;
}

$Class* Printable::class$ = nullptr;

		} // print
	} // awt
} // java