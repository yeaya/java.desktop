#include <javax/print/PrintServiceLookup.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/MultiDocPrintService.h>
#include <javax/print/PrintService.h>
#include <javax/print/PrintServiceLookup$1.h>
#include <javax/print/PrintServiceLookup$Services.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/attribute/AttributeSet.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $MultiDocPrintServiceArray = $Array<::javax::print::MultiDocPrintService>;
using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $DocFlavor = ::javax::print::DocFlavor;
using $MultiDocPrintService = ::javax::print::MultiDocPrintService;
using $PrintService = ::javax::print::PrintService;
using $PrintServiceLookup$1 = ::javax::print::PrintServiceLookup$1;
using $PrintServiceLookup$Services = ::javax::print::PrintServiceLookup$Services;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace print {

$MethodInfo _PrintServiceLookup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PrintServiceLookup::*)()>(&PrintServiceLookup::init$))},
	{"getAllLookupServices", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/PrintServiceLookup;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&PrintServiceLookup::getAllLookupServices))},
	{"getDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"getListOfLookupServices", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/PrintServiceLookup;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&PrintServiceLookup::getListOfLookupServices))},
	{"getMultiDocPrintServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/MultiDocPrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMultiDocServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/util/ArrayList;", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/util/ArrayList<Ljavax/print/MultiDocPrintService;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)($DocFlavorArray*,$AttributeSet*)>(&PrintServiceLookup::getMultiDocServices))},
	{"getPrintServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/PrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrintServices", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRegisteredServices", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/PrintService;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&PrintServiceLookup::getRegisteredServices))},
	{"getServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/util/ArrayList;", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)Ljava/util/ArrayList<Ljavax/print/PrintService;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)($DocFlavor*,$AttributeSet*)>(&PrintServiceLookup::getServices))},
	{"getServicesForContext", "()Ljavax/print/PrintServiceLookup$Services;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PrintServiceLookup$Services*(*)()>(&PrintServiceLookup::getServicesForContext))},
	{"initListOfLookupServices", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/PrintServiceLookup;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&PrintServiceLookup::initListOfLookupServices))},
	{"initRegisteredServices", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/PrintService;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&PrintServiceLookup::initRegisteredServices))},
	{"lookupDefaultPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$PrintService*(*)()>(&PrintServiceLookup::lookupDefaultPrintService))},
	{"lookupMultiDocPrintServices", "([Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/MultiDocPrintService;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$MultiDocPrintServiceArray*(*)($DocFlavorArray*,$AttributeSet*)>(&PrintServiceLookup::lookupMultiDocPrintServices))},
	{"lookupPrintServices", "(Ljavax/print/DocFlavor;Ljavax/print/attribute/AttributeSet;)[Ljavax/print/PrintService;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$PrintServiceArray*(*)($DocFlavor*,$AttributeSet*)>(&PrintServiceLookup::lookupPrintServices))},
	{"registerService", "(Ljavax/print/PrintService;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PrintService*)>(&PrintServiceLookup::registerService))},
	{"registerServiceProvider", "(Ljavax/print/PrintServiceLookup;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(PrintServiceLookup*)>(&PrintServiceLookup::registerServiceProvider))},
	{}
};

$InnerClassInfo _PrintServiceLookup_InnerClassesInfo_[] = {
	{"javax.print.PrintServiceLookup$Services", "javax.print.PrintServiceLookup", "Services", $STATIC},
	{"javax.print.PrintServiceLookup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintServiceLookup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.PrintServiceLookup",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PrintServiceLookup_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookup_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.PrintServiceLookup$Services,javax.print.PrintServiceLookup$1"
};

$Object* allocate$PrintServiceLookup($Class* clazz) {
	return $of($alloc(PrintServiceLookup));
}

void PrintServiceLookup::init$() {
}

$PrintServiceLookup$Services* PrintServiceLookup::getServicesForContext() {
	$useLocalCurrentObjectStackCache();
	$load($PrintServiceLookup$Services);
	$var($PrintServiceLookup$Services, services, $cast($PrintServiceLookup$Services, $nc($($AppContext::getAppContext()))->get($PrintServiceLookup$Services::class$)));
	if (services == nullptr) {
		$assign(services, $new($PrintServiceLookup$Services));
		$nc($($AppContext::getAppContext()))->put($PrintServiceLookup$Services::class$, services);
	}
	return services;
}

$ArrayList* PrintServiceLookup::getListOfLookupServices() {
	return $nc($(getServicesForContext()))->listOfLookupServices;
}

$ArrayList* PrintServiceLookup::initListOfLookupServices() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, listOfLookupServices, $new($ArrayList));
	$set($nc($(getServicesForContext())), listOfLookupServices, listOfLookupServices);
	return listOfLookupServices;
}

$ArrayList* PrintServiceLookup::getRegisteredServices() {
	return $nc($(getServicesForContext()))->registeredServices;
}

$ArrayList* PrintServiceLookup::initRegisteredServices() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, registeredServices, $new($ArrayList));
	$set($nc($(getServicesForContext())), registeredServices, registeredServices);
	return registeredServices;
}

$PrintServiceArray* PrintServiceLookup::lookupPrintServices($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, getServices(flavor, attributes));
	return $fcast($PrintServiceArray, $nc(list)->toArray($$new($PrintServiceArray, list->size())));
}

$MultiDocPrintServiceArray* PrintServiceLookup::lookupMultiDocPrintServices($DocFlavorArray* flavors, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, getMultiDocServices(flavors, attributes));
	return $fcast($MultiDocPrintServiceArray, $nc(list)->toArray($$new($MultiDocPrintServiceArray, list->size())));
}

$PrintService* PrintServiceLookup::lookupDefaultPrintService() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, psIterator, $nc($(getAllLookupServices()))->iterator());
	while ($nc(psIterator)->hasNext()) {
		try {
			$var(PrintServiceLookup, lus, $cast(PrintServiceLookup, psIterator->next()));
			$var($PrintService, service, $nc(lus)->getDefaultPrintService());
			if (service != nullptr) {
				return service;
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	return nullptr;
}

bool PrintServiceLookup::registerServiceProvider(PrintServiceLookup* sp) {
	$useLocalCurrentObjectStackCache();
	$load(PrintServiceLookup);
	$synchronized(PrintServiceLookup::class$) {
		$var($Iterator, psIterator, $nc($(getAllLookupServices()))->iterator());
		while ($nc(psIterator)->hasNext()) {
			try {
				$var($Object, lus, psIterator->next());
				if ($nc($of(lus))->getClass() == $nc($of(sp))->getClass()) {
					return false;
				}
			} catch ($Exception&) {
				$catch();
			}
		}
		$nc($(getListOfLookupServices()))->add(sp);
		return true;
	}
}

bool PrintServiceLookup::registerService($PrintService* service) {
	$load(PrintServiceLookup);
	$synchronized(PrintServiceLookup::class$) {
		if (service == nullptr || $instanceOf($StreamPrintService, service)) {
			return false;
		}
		$var($ArrayList, registeredServices, getRegisteredServices());
		if (registeredServices == nullptr) {
			$assign(registeredServices, initRegisteredServices());
		} else if ($nc(registeredServices)->contains(service)) {
			return false;
		}
		$nc(registeredServices)->add(service);
		return true;
	}
}

$ArrayList* PrintServiceLookup::getAllLookupServices() {
	$load(PrintServiceLookup);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(PrintServiceLookup::class$) {
		$var($ArrayList, listOfLookupServices, getListOfLookupServices());
		if (listOfLookupServices != nullptr) {
			return listOfLookupServices;
		} else {
			$assign(listOfLookupServices, initListOfLookupServices());
		}
		try {
			$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($PrintServiceLookup$1)));
		} catch ($PrivilegedActionException&) {
			$catch();
		}
		return listOfLookupServices;
	}
}

$ArrayList* PrintServiceLookup::getServices($DocFlavor* flavor, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, listOfServices, $new($ArrayList));
	$var($Iterator, psIterator, $nc($(getAllLookupServices()))->iterator());
	while ($nc(psIterator)->hasNext()) {
		try {
			$var(PrintServiceLookup, lus, $cast(PrintServiceLookup, psIterator->next()));
			$var($PrintServiceArray, services, nullptr);
			if (flavor == nullptr && attributes == nullptr) {
				try {
					$assign(services, $nc(lus)->getPrintServices());
				} catch ($Throwable&) {
					$catch();
				}
			} else {
				$assign(services, $nc(lus)->getPrintServices(flavor, attributes));
			}
			if (services == nullptr) {
				continue;
			}
			for (int32_t i = 0; i < $nc(services)->length; ++i) {
				listOfServices->add(services->get(i));
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	$var($ArrayList, registeredServices, nullptr);
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		$assign(registeredServices, getRegisteredServices());
	} catch ($SecurityException&) {
		$catch();
	}
	if (registeredServices != nullptr) {
		$var($PrintServiceArray, services, $fcast($PrintServiceArray, registeredServices->toArray($$new($PrintServiceArray, registeredServices->size()))));
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			if (!listOfServices->contains(services->get(i))) {
				if (flavor == nullptr && attributes == nullptr) {
					listOfServices->add(services->get(i));
				} else {
					bool var$1 = ((flavor != nullptr && $nc(services->get(i))->isDocFlavorSupported(flavor)) || flavor == nullptr);
					if (var$1 && nullptr == $nc(services->get(i))->getUnsupportedAttributes(flavor, attributes)) {
						listOfServices->add(services->get(i));
					}
				}
			}
		}
	}
	return listOfServices;
}

$ArrayList* PrintServiceLookup::getMultiDocServices($DocFlavorArray* flavors, $AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, listOfServices, $new($ArrayList));
	$var($Iterator, psIterator, $nc($(getAllLookupServices()))->iterator());
	while ($nc(psIterator)->hasNext()) {
		try {
			$var(PrintServiceLookup, lus, $cast(PrintServiceLookup, psIterator->next()));
			$var($MultiDocPrintServiceArray, services, $nc(lus)->getMultiDocPrintServices(flavors, attributes));
			if (services == nullptr) {
				continue;
			}
			for (int32_t i = 0; i < $nc(services)->length; ++i) {
				listOfServices->add(services->get(i));
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	$var($ArrayList, registeredServices, nullptr);
	try {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkPrintJobAccess();
		}
		$assign(registeredServices, getRegisteredServices());
	} catch ($Exception&) {
		$catch();
	}
	if (registeredServices != nullptr) {
		$var($PrintServiceArray, services, $fcast($PrintServiceArray, registeredServices->toArray($$new($PrintServiceArray, registeredServices->size()))));
		for (int32_t i = 0; i < $nc(services)->length; ++i) {
			if ($instanceOf($MultiDocPrintService, services->get(i)) && !listOfServices->contains(services->get(i))) {
				if (flavors == nullptr || $nc(flavors)->length == 0) {
					listOfServices->add($cast($MultiDocPrintService, services->get(i)));
				} else {
					bool supported = true;
					for (int32_t f = 0; f < flavors->length; ++f) {
						if ($nc(services->get(i))->isDocFlavorSupported(flavors->get(f))) {
							if ($nc(services->get(i))->getUnsupportedAttributes(flavors->get(f), attributes) != nullptr) {
								supported = false;
								break;
							}
						} else {
							supported = false;
							break;
						}
					}
					if (supported) {
						listOfServices->add($cast($MultiDocPrintService, services->get(i)));
					}
				}
			}
		}
	}
	return listOfServices;
}

PrintServiceLookup::PrintServiceLookup() {
}

$Class* PrintServiceLookup::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookup, name, initialize, &_PrintServiceLookup_ClassInfo_, allocate$PrintServiceLookup);
	return class$;
}

$Class* PrintServiceLookup::class$ = nullptr;

	} // print
} // javax