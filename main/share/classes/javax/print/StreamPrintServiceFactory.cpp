#include <javax/print/StreamPrintServiceFactory.h>

#include <java/io/OutputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/StreamPrintServiceFactory$1.h>
#include <javax/print/StreamPrintServiceFactory$Services.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $StreamPrintServiceFactoryArray = $Array<::javax::print::StreamPrintServiceFactory>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $DocFlavor = ::javax::print::DocFlavor;
using $StreamPrintServiceFactory$1 = ::javax::print::StreamPrintServiceFactory$1;
using $StreamPrintServiceFactory$Services = ::javax::print::StreamPrintServiceFactory$Services;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace print {

$MethodInfo _StreamPrintServiceFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(StreamPrintServiceFactory::*)()>(&StreamPrintServiceFactory::init$))},
	{"getAllFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&StreamPrintServiceFactory::getAllFactories))},
	{"getFactories", "(Ljavax/print/DocFlavor;Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljavax/print/DocFlavor;Ljava/lang/String;)Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)($DocFlavor*,$String*)>(&StreamPrintServiceFactory::getFactories))},
	{"getListOfFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&StreamPrintServiceFactory::getListOfFactories))},
	{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrintService", "(Ljava/io/OutputStream;)Ljavax/print/StreamPrintService;", nullptr, $PUBLIC | $ABSTRACT},
	{"getServices", "()Ljavax/print/StreamPrintServiceFactory$Services;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StreamPrintServiceFactory$Services*(*)()>(&StreamPrintServiceFactory::getServices))},
	{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"initListOfFactories", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE | $STATIC, $method(static_cast<$ArrayList*(*)()>(&StreamPrintServiceFactory::initListOfFactories))},
	{"isMember", "(Ljavax/print/DocFlavor;[Ljavax/print/DocFlavor;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DocFlavor*,$DocFlavorArray*)>(&StreamPrintServiceFactory::isMember))},
	{"lookupStreamPrintServiceFactories", "(Ljavax/print/DocFlavor;Ljava/lang/String;)[Ljavax/print/StreamPrintServiceFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StreamPrintServiceFactoryArray*(*)($DocFlavor*,$String*)>(&StreamPrintServiceFactory::lookupStreamPrintServiceFactories))},
	{}
};

$InnerClassInfo _StreamPrintServiceFactory_InnerClassesInfo_[] = {
	{"javax.print.StreamPrintServiceFactory$Services", "javax.print.StreamPrintServiceFactory", "Services", $STATIC},
	{"javax.print.StreamPrintServiceFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StreamPrintServiceFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.StreamPrintServiceFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StreamPrintServiceFactory_MethodInfo_,
	nullptr,
	nullptr,
	_StreamPrintServiceFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.StreamPrintServiceFactory$Services,javax.print.StreamPrintServiceFactory$1"
};

$Object* allocate$StreamPrintServiceFactory($Class* clazz) {
	return $of($alloc(StreamPrintServiceFactory));
}

void StreamPrintServiceFactory::init$() {
}

$StreamPrintServiceFactory$Services* StreamPrintServiceFactory::getServices() {
	$useLocalCurrentObjectStackCache();
	$load($StreamPrintServiceFactory$Services);
	$var($StreamPrintServiceFactory$Services, services, $cast($StreamPrintServiceFactory$Services, $nc($($AppContext::getAppContext()))->get($StreamPrintServiceFactory$Services::class$)));
	if (services == nullptr) {
		$assign(services, $new($StreamPrintServiceFactory$Services));
		$nc($($AppContext::getAppContext()))->put($StreamPrintServiceFactory$Services::class$, services);
	}
	return services;
}

$ArrayList* StreamPrintServiceFactory::getListOfFactories() {
	return $nc($(getServices()))->listOfFactories;
}

$ArrayList* StreamPrintServiceFactory::initListOfFactories() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, listOfFactories, $new($ArrayList));
	$set($nc($(getServices())), listOfFactories, listOfFactories);
	return listOfFactories;
}

$StreamPrintServiceFactoryArray* StreamPrintServiceFactory::lookupStreamPrintServiceFactories($DocFlavor* flavor, $String* outputMimeType) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, getFactories(flavor, outputMimeType));
	return $fcast($StreamPrintServiceFactoryArray, $nc(list)->toArray($$new($StreamPrintServiceFactoryArray, list->size())));
}

$ArrayList* StreamPrintServiceFactory::getAllFactories() {
	$load(StreamPrintServiceFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(StreamPrintServiceFactory::class$) {
		$var($ArrayList, listOfFactories, getListOfFactories());
		if (listOfFactories != nullptr) {
			return listOfFactories;
		} else {
			$assign(listOfFactories, initListOfFactories());
		}
		try {
			$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($StreamPrintServiceFactory$1)));
		} catch ($PrivilegedActionException& e) {
		}
		return listOfFactories;
	}
}

bool StreamPrintServiceFactory::isMember($DocFlavor* flavor, $DocFlavorArray* flavors) {
	for (int32_t f = 0; f < $nc(flavors)->length; ++f) {
		if ($nc(flavor)->equals(flavors->get(f))) {
			return true;
		}
	}
	return false;
}

$ArrayList* StreamPrintServiceFactory::getFactories($DocFlavor* flavor, $String* outType) {
	$useLocalCurrentObjectStackCache();
	if (flavor == nullptr && outType == nullptr) {
		return getAllFactories();
	}
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($(getAllFactories()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(StreamPrintServiceFactory, factory, $cast(StreamPrintServiceFactory, i$->next()));
			{
				bool var$0 = (outType == nullptr || $nc(outType)->equalsIgnoreCase($($nc(factory)->getOutputFormat())));
				if (var$0 && (flavor == nullptr || isMember(flavor, $($nc(factory)->getSupportedDocFlavors())))) {
					list->add(factory);
				}
			}
		}
	}
	return list;
}

StreamPrintServiceFactory::StreamPrintServiceFactory() {
}

$Class* StreamPrintServiceFactory::load$($String* name, bool initialize) {
	$loadClass(StreamPrintServiceFactory, name, initialize, &_StreamPrintServiceFactory_ClassInfo_, allocate$StreamPrintServiceFactory);
	return class$;
}

$Class* StreamPrintServiceFactory::class$ = nullptr;

	} // print
} // javax