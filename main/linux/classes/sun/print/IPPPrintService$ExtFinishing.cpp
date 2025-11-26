#include <sun/print/IPPPrintService$ExtFinishing.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Finishings.h>
#include <sun/print/IPPPrintService.h>
#include <jcpp.h>

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $Finishings = ::javax::print::attribute::standard::Finishings;
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

$FieldInfo _IPPPrintService$ExtFinishing_FieldInfo_[] = {
	{"this$0", "Lsun/print/IPPPrintService;", nullptr, $FINAL | $SYNTHETIC, $field(IPPPrintService$ExtFinishing, this$0)},
	{}
};

$MethodInfo _IPPPrintService$ExtFinishing_MethodInfo_[] = {
	{"<init>", "(Lsun/print/IPPPrintService;I)V", nullptr, 0, $method(static_cast<void(IPPPrintService$ExtFinishing::*)($IPPPrintService*,int32_t)>(&IPPPrintService$ExtFinishing::init$))},
	{"getAll", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, 0},
	{}
};

$InnerClassInfo _IPPPrintService$ExtFinishing_InnerClassesInfo_[] = {
	{"sun.print.IPPPrintService$ExtFinishing", "sun.print.IPPPrintService", "ExtFinishing", $PRIVATE},
	{}
};

$ClassInfo _IPPPrintService$ExtFinishing_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.IPPPrintService$ExtFinishing",
	"javax.print.attribute.standard.Finishings",
	nullptr,
	_IPPPrintService$ExtFinishing_FieldInfo_,
	_IPPPrintService$ExtFinishing_MethodInfo_,
	nullptr,
	nullptr,
	_IPPPrintService$ExtFinishing_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.IPPPrintService"
};

$Object* allocate$IPPPrintService$ExtFinishing($Class* clazz) {
	return $of($alloc(IPPPrintService$ExtFinishing));
}

void IPPPrintService$ExtFinishing::init$($IPPPrintService* this$0, int32_t value) {
	$set(this, this$0, this$0);
	$Finishings::init$(100);
}

$EnumSyntaxArray* IPPPrintService$ExtFinishing::getAll() {
	$var($EnumSyntaxArray, es, $Finishings::getEnumValueTable());
	return es;
}

IPPPrintService$ExtFinishing::IPPPrintService$ExtFinishing() {
}

$Class* IPPPrintService$ExtFinishing::load$($String* name, bool initialize) {
	$loadClass(IPPPrintService$ExtFinishing, name, initialize, &_IPPPrintService$ExtFinishing_ClassInfo_, allocate$IPPPrintService$ExtFinishing);
	return class$;
}

$Class* IPPPrintService$ExtFinishing::class$ = nullptr;

	} // print
} // sun