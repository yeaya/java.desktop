#include <com/apple/eawt/_AppMiscHandlers.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppMiscHandlers_FieldInfo_[] = {
	{"isSuddenTerminationEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(_AppMiscHandlers, isSuddenTerminationEnabled)},
	{}
};

$MethodInfo __AppMiscHandlers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(_AppMiscHandlers::*)()>(&_AppMiscHandlers::init$))},
	{"disableSuddenTermination", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&_AppMiscHandlers::disableSuddenTermination))},
	{"enableSuddenTermination", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&_AppMiscHandlers::enableSuddenTermination))},
	{"isSuddenTerminationEnbaled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&_AppMiscHandlers::isSuddenTerminationEnbaled))},
	{"nativeDisableSuddenTermination", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&_AppMiscHandlers::nativeDisableSuddenTermination))},
	{"nativeEnableSuddenTermination", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&_AppMiscHandlers::nativeEnableSuddenTermination))},
	{"nativeOpenHelpViewer", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&_AppMiscHandlers::nativeOpenHelpViewer))},
	{"nativeRequestActivation", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&_AppMiscHandlers::nativeRequestActivation))},
	{"nativeRequestUserAttention", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&_AppMiscHandlers::nativeRequestUserAttention))},
	{"openHelpViewer", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&_AppMiscHandlers::openHelpViewer))},
	{"requestActivation", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&_AppMiscHandlers::requestActivation))},
	{"requestUserAttention", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&_AppMiscHandlers::requestUserAttention))},
	{}
};

#define _METHOD_INDEX_nativeDisableSuddenTermination 4
#define _METHOD_INDEX_nativeEnableSuddenTermination 5
#define _METHOD_INDEX_nativeOpenHelpViewer 6
#define _METHOD_INDEX_nativeRequestActivation 7
#define _METHOD_INDEX_nativeRequestUserAttention 8

$ClassInfo __AppMiscHandlers_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppMiscHandlers",
	"java.lang.Object",
	nullptr,
	__AppMiscHandlers_FieldInfo_,
	__AppMiscHandlers_MethodInfo_
};

$Object* allocate$_AppMiscHandlers($Class* clazz) {
	return $of($alloc(_AppMiscHandlers));
}

bool _AppMiscHandlers::isSuddenTerminationEnabled = false;

void _AppMiscHandlers::init$() {
}

void _AppMiscHandlers::nativeOpenHelpViewer() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeOpenHelpViewer, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeRequestActivation(bool allWindows) {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeRequestActivation, void, bool allWindows);
	$invokeNativeStatic(allWindows);
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeRequestUserAttention(bool critical) {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeRequestUserAttention, void, bool critical);
	$invokeNativeStatic(critical);
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeEnableSuddenTermination() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeEnableSuddenTermination, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::nativeDisableSuddenTermination() {
	$init(_AppMiscHandlers);
	$prepareNativeStatic(_AppMiscHandlers, nativeDisableSuddenTermination, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void _AppMiscHandlers::openHelpViewer() {
	nativeOpenHelpViewer();
}

void _AppMiscHandlers::requestActivation(bool allWindows) {
	nativeRequestActivation(allWindows);
}

void _AppMiscHandlers::requestUserAttention(bool critical) {
	nativeRequestUserAttention(critical);
}

void _AppMiscHandlers::enableSuddenTermination() {
	$init(_AppMiscHandlers);
	_AppMiscHandlers::isSuddenTerminationEnabled = true;
	nativeEnableSuddenTermination();
}

void _AppMiscHandlers::disableSuddenTermination() {
	$init(_AppMiscHandlers);
	_AppMiscHandlers::isSuddenTerminationEnabled = false;
	nativeDisableSuddenTermination();
}

bool _AppMiscHandlers::isSuddenTerminationEnbaled() {
	$init(_AppMiscHandlers);
	return _AppMiscHandlers::isSuddenTerminationEnabled;
}

_AppMiscHandlers::_AppMiscHandlers() {
}

$Class* _AppMiscHandlers::load$($String* name, bool initialize) {
	$loadClass(_AppMiscHandlers, name, initialize, &__AppMiscHandlers_ClassInfo_, allocate$_AppMiscHandlers);
	return class$;
}

$Class* _AppMiscHandlers::class$ = nullptr;

		} // eawt
	} // apple
} // com