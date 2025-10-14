#include <sun/awt/datatransfer/DesktopDatatransferServiceImpl.h>

#include <java/awt/EventQueue.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/function/Supplier.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

#undef FLAVOR_MAP_KEY

using $EventQueue = ::java::awt::EventQueue;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Supplier = ::java::util::function::Supplier;
using $AppContext = ::sun::awt::AppContext;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _DesktopDatatransferServiceImpl_FieldInfo_[] = {
	{"FLAVOR_MAP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DesktopDatatransferServiceImpl, FLAVOR_MAP_KEY)},
	{}
};

$MethodInfo _DesktopDatatransferServiceImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DesktopDatatransferServiceImpl::*)()>(&DesktopDatatransferServiceImpl::init$))},
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFlavorMap", "(Ljava/util/function/Supplier;)Ljava/awt/datatransfer/FlavorMap;", "(Ljava/util/function/Supplier<Ljava/awt/datatransfer/FlavorMap;>;)Ljava/awt/datatransfer/FlavorMap;", $PUBLIC},
	{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"invokeOnEventThread", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"isDesktopPresent", "()Z", nullptr, $PUBLIC},
	{"registerTextFlavorProperties", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DesktopDatatransferServiceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.datatransfer.DesktopDatatransferServiceImpl",
	"java.lang.Object",
	"sun.datatransfer.DesktopDatatransferService",
	_DesktopDatatransferServiceImpl_FieldInfo_,
	_DesktopDatatransferServiceImpl_MethodInfo_
};

$Object* allocate$DesktopDatatransferServiceImpl($Class* clazz) {
	return $of($alloc(DesktopDatatransferServiceImpl));
}

$Object* DesktopDatatransferServiceImpl::FLAVOR_MAP_KEY = nullptr;

void DesktopDatatransferServiceImpl::init$() {
}

void DesktopDatatransferServiceImpl::invokeOnEventThread($Runnable* r) {
	$EventQueue::invokeLater(r);
}

$String* DesktopDatatransferServiceImpl::getDefaultUnicodeEncoding() {
	$var($DataTransferer, dataTransferer, $DataTransferer::getInstance());
	if (dataTransferer != nullptr) {
		return dataTransferer->getDefaultUnicodeEncoding();
	}
	return nullptr;
}

$FlavorMap* DesktopDatatransferServiceImpl::getFlavorMap($Supplier* supplier) {
	$var($AppContext, context, $AppContext::getAppContext());
	$var($FlavorMap, fm, $cast($FlavorMap, $nc(context)->get(DesktopDatatransferServiceImpl::FLAVOR_MAP_KEY)));
	if (fm == nullptr) {
		$assign(fm, $cast($FlavorMap, $nc(supplier)->get()));
		context->put(DesktopDatatransferServiceImpl::FLAVOR_MAP_KEY, fm);
	}
	return fm;
}

bool DesktopDatatransferServiceImpl::isDesktopPresent() {
	return true;
}

$LinkedHashSet* DesktopDatatransferServiceImpl::getPlatformMappingsForNative($String* nat) {
	$var($DataTransferer, instance, $DataTransferer::getInstance());
	return instance != nullptr ? $nc(instance)->getPlatformMappingsForNative(nat) : $new($LinkedHashSet);
}

$LinkedHashSet* DesktopDatatransferServiceImpl::getPlatformMappingsForFlavor($DataFlavor* df) {
	$var($DataTransferer, instance, $DataTransferer::getInstance());
	return instance != nullptr ? $nc(instance)->getPlatformMappingsForFlavor(df) : $new($LinkedHashSet);
}

void DesktopDatatransferServiceImpl::registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) {
	$var($DataTransferer, instance, $DataTransferer::getInstance());
	if (instance != nullptr) {
		instance->registerTextFlavorProperties(nat, charset, eoln, terminators);
	}
}

void clinit$DesktopDatatransferServiceImpl($Class* class$) {
	$assignStatic(DesktopDatatransferServiceImpl::FLAVOR_MAP_KEY, $new($Object));
}

DesktopDatatransferServiceImpl::DesktopDatatransferServiceImpl() {
}

$Class* DesktopDatatransferServiceImpl::load$($String* name, bool initialize) {
	$loadClass(DesktopDatatransferServiceImpl, name, initialize, &_DesktopDatatransferServiceImpl_ClassInfo_, clinit$DesktopDatatransferServiceImpl, allocate$DesktopDatatransferServiceImpl);
	return class$;
}

$Class* DesktopDatatransferServiceImpl::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun