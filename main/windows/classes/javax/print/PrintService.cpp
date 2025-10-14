#include <javax/print/PrintService.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/event/PrintServiceAttributeListener.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $PrintServiceAttributeListener = ::javax::print::event::PrintServiceAttributeListener;

namespace javax {
	namespace print {

$MethodInfo _PrintService_MethodInfo_[] = {
	{"addPrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"createPrintJob", "()Ljavax/print/DocPrintJob;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttribute", "(Ljava/lang/Class;)Ljavax/print/attribute/PrintServiceAttribute;", "<T::Ljavax/print/attribute/PrintServiceAttribute;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT},
	{"getAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultAttributeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getServiceUIFactory", "()Ljavax/print/ServiceUIFactory;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSupportedAttributeCategories", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getSupportedAttributeValues", "(Ljava/lang/Class;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnsupportedAttributes", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljavax/print/attribute/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttributeCategorySupported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;)Z", $PUBLIC | $ABSTRACT},
	{"isAttributeValueSupported", "(Ljavax/print/attribute/Attribute;Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isDocFlavorSupported", "(Ljavax/print/DocFlavor;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removePrintServiceAttributeListener", "(Ljavax/print/event/PrintServiceAttributeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintService_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.PrintService",
	nullptr,
	nullptr,
	nullptr,
	_PrintService_MethodInfo_
};

$Object* allocate$PrintService($Class* clazz) {
	return $of($alloc(PrintService));
}

bool PrintService::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t PrintService::hashCode() {
	 return this->$Object::hashCode();
}

$Class* PrintService::load$($String* name, bool initialize) {
	$loadClass(PrintService, name, initialize, &_PrintService_ClassInfo_, allocate$PrintService);
	return class$;
}

$Class* PrintService::class$ = nullptr;

	} // print
} // javax