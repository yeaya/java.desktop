#include <javax/print/PrintServiceLookup$Services.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/print/PrintServiceLookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;

namespace javax {
	namespace print {

$FieldInfo _PrintServiceLookup$Services_FieldInfo_[] = {
	{"listOfLookupServices", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/PrintServiceLookup;>;", $PRIVATE, $field(PrintServiceLookup$Services, listOfLookupServices)},
	{"registeredServices", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/PrintService;>;", $PRIVATE, $field(PrintServiceLookup$Services, registeredServices)},
	{}
};

$MethodInfo _PrintServiceLookup$Services_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrintServiceLookup$Services::*)()>(&PrintServiceLookup$Services::init$))},
	{}
};

$InnerClassInfo _PrintServiceLookup$Services_InnerClassesInfo_[] = {
	{"javax.print.PrintServiceLookup$Services", "javax.print.PrintServiceLookup", "Services", $STATIC},
	{}
};

$ClassInfo _PrintServiceLookup$Services_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.PrintServiceLookup$Services",
	"java.lang.Object",
	nullptr,
	_PrintServiceLookup$Services_FieldInfo_,
	_PrintServiceLookup$Services_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookup$Services_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.PrintServiceLookup"
};

$Object* allocate$PrintServiceLookup$Services($Class* clazz) {
	return $of($alloc(PrintServiceLookup$Services));
}

void PrintServiceLookup$Services::init$() {
	$set(this, listOfLookupServices, nullptr);
	$set(this, registeredServices, nullptr);
}

PrintServiceLookup$Services::PrintServiceLookup$Services() {
}

$Class* PrintServiceLookup$Services::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookup$Services, name, initialize, &_PrintServiceLookup$Services_ClassInfo_, allocate$PrintServiceLookup$Services);
	return class$;
}

$Class* PrintServiceLookup$Services::class$ = nullptr;

	} // print
} // javax