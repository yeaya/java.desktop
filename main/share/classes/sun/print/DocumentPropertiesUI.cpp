#include <sun/print/DocumentPropertiesUI.h>

#include <java/awt/Window.h>
#include <java/awt/print/PrinterJob.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

#undef DOCPROPERTIESCLASSNAME
#undef DOCUMENTPROPERTIES_ROLE

using $Window = ::java::awt::Window;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintService = ::javax::print::PrintService;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace sun {
	namespace print {

$FieldInfo _DocumentPropertiesUI_FieldInfo_[] = {
	{"DOCUMENTPROPERTIES_ROLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DocumentPropertiesUI, DOCUMENTPROPERTIES_ROLE)},
	{"DOCPROPERTIESCLASSNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentPropertiesUI, DOCPROPERTIESCLASSNAME)},
	{}
};

$MethodInfo _DocumentPropertiesUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocumentPropertiesUI::*)()>(&DocumentPropertiesUI::init$))},
	{"showDocumentProperties", "(Ljava/awt/print/PrinterJob;Ljava/awt/Window;Ljavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;)Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocumentPropertiesUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.print.DocumentPropertiesUI",
	"java.lang.Object",
	nullptr,
	_DocumentPropertiesUI_FieldInfo_,
	_DocumentPropertiesUI_MethodInfo_
};

$Object* allocate$DocumentPropertiesUI($Class* clazz) {
	return $of($alloc(DocumentPropertiesUI));
}

$String* DocumentPropertiesUI::DOCPROPERTIESCLASSNAME = nullptr;

void DocumentPropertiesUI::init$() {
}

void clinit$DocumentPropertiesUI($Class* class$) {
	$assignStatic(DocumentPropertiesUI::DOCPROPERTIESCLASSNAME, DocumentPropertiesUI::class$->getName());
}

DocumentPropertiesUI::DocumentPropertiesUI() {
}

$Class* DocumentPropertiesUI::load$($String* name, bool initialize) {
	$loadClass(DocumentPropertiesUI, name, initialize, &_DocumentPropertiesUI_ClassInfo_, clinit$DocumentPropertiesUI, allocate$DocumentPropertiesUI);
	return class$;
}

$Class* DocumentPropertiesUI::class$ = nullptr;

	} // print
} // sun