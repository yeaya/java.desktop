#include <HeadlessMenuSelectionManager.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

$MethodInfo _HeadlessMenuSelectionManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessMenuSelectionManager::*)()>(&HeadlessMenuSelectionManager::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessMenuSelectionManager::main))},
	{}
};

$ClassInfo _HeadlessMenuSelectionManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessMenuSelectionManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessMenuSelectionManager_MethodInfo_
};

$Object* allocate$HeadlessMenuSelectionManager($Class* clazz) {
	return $of($alloc(HeadlessMenuSelectionManager));
}

void HeadlessMenuSelectionManager::init$() {
}

void HeadlessMenuSelectionManager::main($StringArray* args) {
	$var($MenuSelectionManager, msm, $new($MenuSelectionManager));
	$assign(msm, $MenuSelectionManager::defaultManager());
}

HeadlessMenuSelectionManager::HeadlessMenuSelectionManager() {
}

$Class* HeadlessMenuSelectionManager::load$($String* name, bool initialize) {
	$loadClass(HeadlessMenuSelectionManager, name, initialize, &_HeadlessMenuSelectionManager_ClassInfo_, allocate$HeadlessMenuSelectionManager);
	return class$;
}

$Class* HeadlessMenuSelectionManager::class$ = nullptr;