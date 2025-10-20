#include <sun/print/PrintServiceLookupProvider.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/MultiDocPrintService.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <sun/print/PrintServiceLookupProvider$1.h>
#include <sun/print/PrintServiceLookupProvider$PrinterChangeListener.h>
#include <sun/print/PrintServiceLookupProvider$RemotePrinterChangeListener.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $MultiDocPrintServiceArray = $Array<::javax::print::MultiDocPrintService>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $DocFlavor = ::javax::print::DocFlavor;
using $MultiDocPrintService = ::javax::print::MultiDocPrintService;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $HashPrintServiceAttributeSet = ::javax::print::attribute::HashPrintServiceAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $TextSyntax = ::javax::print::attribute::TextSyntax;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $PrintServiceLookupProvider$1 = ::sun::print::PrintServiceLookupProvider$1;
using $PrintServiceLookupProvider$PrinterChangeListener = ::sun::print::PrintServiceLookupProvider$PrinterChangeListener;
using $PrintServiceLookupProvider$RemotePrinterChangeListener = ::sun::print::PrintServiceLookupProvider$RemotePrinterChangeListener;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace print {

$FieldInfo _PrintServiceLookupProvider_FieldInfo_[] = {
	{"defaultPrintService", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, defaultPrintService)},
	{"printServices", "[Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(PrintServiceLookupProvider, printServices)},
	{"win32PrintLUS", "Lsun/print/PrintServiceLookupProvider;", nullptr, $PRIVATE | $STATIC, $staticField(PrintServiceLookupProvider, win32PrintLUS)},
	{}
};

$MethodInfo _PrintServiceLookupProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::init$))},
	{"getAllPrinterNames", "()[Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$StringArray*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getAllPrinterNames))},
	{"getDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultPrinterName", "()Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::getDefaultPrinterName))},
	{"getMultiDocPrintServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/MultiDocPrintService;", nullptr, $PUBLIC},
	{"getPrintServiceByName", "(Ljava/lang/String;)Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPrintServices", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPrintServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getWin32PrintLUS", "()Lsun/print/PrintServiceLookupProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PrintServiceLookupProvider*(*)()>(&PrintServiceLookupProvider::getWin32PrintLUS))},
	{"invalidateServices", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::invalidateServices))},
	{"matchingService", "(Ljavax/print/PrintService;Ljavax/print/attribute/PrintServiceAttributeSet;)Z", nullptr, 0},
	{"notifyLocalPrinterChange", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::notifyLocalPrinterChange))},
	{"notifyRemotePrinterChange", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::notifyRemotePrinterChange))},
	{"refreshServices", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(PrintServiceLookupProvider::*)()>(&PrintServiceLookupProvider::refreshServices))},
	{}
};

#define _METHOD_INDEX_getAllPrinterNames 1
#define _METHOD_INDEX_getDefaultPrinterName 3
#define _METHOD_INDEX_notifyLocalPrinterChange 11
#define _METHOD_INDEX_notifyRemotePrinterChange 12

$InnerClassInfo _PrintServiceLookupProvider_InnerClassesInfo_[] = {
	{"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener", "sun.print.PrintServiceLookupProvider", "RemotePrinterChangeListener", $PRIVATE | $FINAL},
	{"sun.print.PrintServiceLookupProvider$PrinterChangeListener", "sun.print.PrintServiceLookupProvider", "PrinterChangeListener", $PRIVATE | $FINAL},
	{"sun.print.PrintServiceLookupProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintServiceLookupProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PrintServiceLookupProvider",
	"javax.print.PrintServiceLookup",
	nullptr,
	_PrintServiceLookupProvider_FieldInfo_,
	_PrintServiceLookupProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookupProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener,sun.print.PrintServiceLookupProvider$PrinterChangeListener,sun.print.PrintServiceLookupProvider$1"
};

$Object* allocate$PrintServiceLookupProvider($Class* clazz) {
	return $of($alloc(PrintServiceLookupProvider));
}

PrintServiceLookupProvider* PrintServiceLookupProvider::win32PrintLUS = nullptr;

PrintServiceLookupProvider* PrintServiceLookupProvider::getWin32PrintLUS() {
	$init(PrintServiceLookupProvider);
	if (PrintServiceLookupProvider::win32PrintLUS == nullptr) {
		$PrintServiceLookup::lookupDefaultPrintService();
	}
	return PrintServiceLookupProvider::win32PrintLUS;
}

void PrintServiceLookupProvider::init$() {
	$useLocalCurrentObjectStackCache();
	$PrintServiceLookup::init$();
	if (PrintServiceLookupProvider::win32PrintLUS == nullptr) {
		$assignStatic(PrintServiceLookupProvider::win32PrintLUS, this);
		$var($Thread, thr, $new($Thread, nullptr, $$new($PrintServiceLookupProvider$PrinterChangeListener, this), "PrinterListener"_s, 0, false));
		thr->setDaemon(true);
		thr->start();
		$var($Thread, remThr, $new($Thread, nullptr, $$new($PrintServiceLookupProvider$RemotePrinterChangeListener, this), "RemotePrinterListener"_s, 0, false));
		remThr->setDaemon(true);
		remThr->start();
	}
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices() {
	$synchronized(this) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		if (this->printServices == nullptr) {
			refreshServices();
		}
		return this->printServices;
	}
}

void PrintServiceLookupProvider::refreshServices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringArray, printers, getAllPrinterNames());
		if (printers == nullptr) {
			invalidateServices();
			$set(this, printServices, $new($PrintServiceArray, 0));
			return;
		}
		$var($PrintServiceArray, newServices, $new($PrintServiceArray, $nc(printers)->length));
		$var($PrintService, defService, getDefaultPrintService());
		for (int32_t p = 0; p < printers->length; ++p) {
			if (defService != nullptr && $nc(printers->get(p))->equals($(defService->getName()))) {
				newServices->set(p, defService);
			} else if (this->printServices == nullptr) {
				newServices->set(p, $$new($Win32PrintService, printers->get(p)));
			} else {
				int32_t j = 0;
				for (j = 0; j < $nc(this->printServices)->length; ++j) {
					if (($nc(this->printServices)->get(j) != nullptr) && ($nc(printers->get(p))->equals($($nc($nc(this->printServices)->get(j))->getName())))) {
						newServices->set(p, $nc(this->printServices)->get(j));
						$nc(this->printServices)->set(j, nullptr);
						break;
					}
				}
				if (j == $nc(this->printServices)->length) {
					newServices->set(p, $$new($Win32PrintService, printers->get(p)));
				}
			}
		}
		invalidateServices();
		$set(this, printServices, newServices);
	}
}

void PrintServiceLookupProvider::invalidateServices() {
	if (this->printServices != nullptr) {
		for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
			if (($instanceOf($Win32PrintService, $nc(this->printServices)->get(j))) && (!$nc($nc(this->printServices)->get(j))->equals(this->defaultPrintService))) {
				$nc(($cast($Win32PrintService, $nc(this->printServices)->get(j))))->invalidateService();
			}
		}
	}
}

$PrintService* PrintServiceLookupProvider::getPrintServiceByName($String* name) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (name == nullptr || $nc(name)->isEmpty()) {
			return nullptr;
		} else {
			$var($PrintServiceArray, printServices, getPrintServices());
			for (int32_t i = 0; i < $nc(printServices)->length; ++i) {
				if ($nc($($nc(printServices->get(i))->getName()))->equals(name)) {
					return printServices->get(i);
				}
			}
			return nullptr;
		}
	}
}

bool PrintServiceLookupProvider::matchingService($PrintService* service, $PrintServiceAttributeSet* serviceSet) {
	$useLocalCurrentObjectStackCache();
	if (serviceSet != nullptr) {
		$var($AttributeArray, attrs, serviceSet->toArray());
		$var($Attribute, serviceAttr, nullptr);
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			$assign(serviceAttr, $nc(service)->getAttribute($nc(attrs->get(i))->getCategory()));
			if (serviceAttr == nullptr || !$nc($of(serviceAttr))->equals(attrs->get(i))) {
				return false;
			}
		}
	}
	return true;
}

$PrintServiceArray* PrintServiceLookupProvider::getPrintServices($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	$var($PrintRequestAttributeSet, requestSet, nullptr);
	$var($PrintServiceAttributeSet, serviceSet, nullptr);
	if (attributes != nullptr && !attributes->isEmpty()) {
		$assign(requestSet, $new($HashPrintRequestAttributeSet));
		$assign(serviceSet, $new($HashPrintServiceAttributeSet));
		$var($AttributeArray, attrs, attributes->toArray());
		for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
			if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
				requestSet->add(attrs->get(i));
			} else if ($instanceOf($PrintServiceAttribute, attrs->get(i))) {
				serviceSet->add(attrs->get(i));
			}
		}
	}
	$var($PrintServiceArray, services, nullptr);
	$load($PrinterName);
	if (serviceSet != nullptr && serviceSet->get($PrinterName::class$) != nullptr) {
		$var($PrinterName, name, $cast($PrinterName, serviceSet->get($PrinterName::class$)));
		$var($PrintService, service, getPrintServiceByName($($nc(name)->getValue())));
		if (service == nullptr || !matchingService(service, serviceSet)) {
			$assign(services, $new($PrintServiceArray, 0));
		} else {
			$assign(services, $new($PrintServiceArray, 1));
			services->set(0, service);
		}
	} else {
		$assign(services, getPrintServices());
	}
	if ($nc(services)->length == 0) {
		return services;
	} else {
		$var($ArrayList, matchingServices, $new($ArrayList));
		for (int32_t i = 0; i < services->length; ++i) {
			try {
				if ($nc(services->get(i))->getUnsupportedAttributes(flavor, requestSet) == nullptr) {
					matchingServices->add(services->get(i));
				}
			} catch ($IllegalArgumentException&) {
				$catch();
			}
		}
		$assign(services, $new($PrintServiceArray, matchingServices->size()));
		return $fcast($PrintServiceArray, matchingServices->toArray(services));
	}
}

$MultiDocPrintServiceArray* PrintServiceLookupProvider::getMultiDocPrintServices($DocFlavorArray* flavors, $AttributeSet* attributes) {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPrintJobAccess();
	}
	return $new($MultiDocPrintServiceArray, 0);
}

$PrintService* PrintServiceLookupProvider::getDefaultPrintService() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		$var($String, defaultPrinter, getDefaultPrinterName());
		if (defaultPrinter == nullptr) {
			return nullptr;
		}
		if ((this->defaultPrintService != nullptr) && $nc($($nc(this->defaultPrintService)->getName()))->equals(defaultPrinter)) {
			return this->defaultPrintService;
		}
		$set(this, defaultPrintService, nullptr);
		if (this->printServices != nullptr) {
			for (int32_t j = 0; j < $nc(this->printServices)->length; ++j) {
				if ($nc(defaultPrinter)->equals($($nc($nc(this->printServices)->get(j))->getName()))) {
					$set(this, defaultPrintService, $nc(this->printServices)->get(j));
					break;
				}
			}
		}
		if (this->defaultPrintService == nullptr) {
			$set(this, defaultPrintService, $new($Win32PrintService, defaultPrinter));
		}
		return this->defaultPrintService;
	}
}

$String* PrintServiceLookupProvider::getDefaultPrinterName() {
	$var($String, $ret, nullptr);
	$prepareNative(PrintServiceLookupProvider, getDefaultPrinterName, $String*);
	$assign($ret, $invokeNative(PrintServiceLookupProvider, getDefaultPrinterName));
	$finishNative();
	return $ret;
}

$StringArray* PrintServiceLookupProvider::getAllPrinterNames() {
	$var($StringArray, $ret, nullptr);
	$prepareNative(PrintServiceLookupProvider, getAllPrinterNames, $StringArray*);
	$assign($ret, $invokeNative(PrintServiceLookupProvider, getAllPrinterNames));
	$finishNative();
	return $ret;
}

void PrintServiceLookupProvider::notifyLocalPrinterChange() {
	$prepareNative(PrintServiceLookupProvider, notifyLocalPrinterChange, void);
	$invokeNative(PrintServiceLookupProvider, notifyLocalPrinterChange);
	$finishNative();
}

void PrintServiceLookupProvider::notifyRemotePrinterChange() {
	$prepareNative(PrintServiceLookupProvider, notifyRemotePrinterChange, void);
	$invokeNative(PrintServiceLookupProvider, notifyRemotePrinterChange);
	$finishNative();
}

void clinit$PrintServiceLookupProvider($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PrintServiceLookupProvider$1)));
	}
}

PrintServiceLookupProvider::PrintServiceLookupProvider() {
}

$Class* PrintServiceLookupProvider::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookupProvider, name, initialize, &_PrintServiceLookupProvider_ClassInfo_, clinit$PrintServiceLookupProvider, allocate$PrintServiceLookupProvider);
	return class$;
}

$Class* PrintServiceLookupProvider::class$ = nullptr;

	} // print
} // sun