#include <java/awt/print/Pageable.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <jcpp.h>

#undef UNKNOWN_NUMBER_OF_PAGES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$FieldInfo _Pageable_FieldInfo_[] = {
	{"UNKNOWN_NUMBER_OF_PAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Pageable, UNKNOWN_NUMBER_OF_PAGES)},
	{}
};

$MethodInfo _Pageable_MethodInfo_[] = {
	{"getNumberOfPages", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IndexOutOfBoundsException"},
	{}
};

$ClassInfo _Pageable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.print.Pageable",
	nullptr,
	nullptr,
	_Pageable_FieldInfo_,
	_Pageable_MethodInfo_
};

$Object* allocate$Pageable($Class* clazz) {
	return $of($alloc(Pageable));
}

$Class* Pageable::load$($String* name, bool initialize) {
	$loadClass(Pageable, name, initialize, &_Pageable_ClassInfo_, allocate$Pageable);
	return class$;
}

$Class* Pageable::class$ = nullptr;

		} // print
	} // awt
} // java