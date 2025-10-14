#include <HeadlessPopupFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupFactory = ::javax::swing::PopupFactory;

$MethodInfo _HeadlessPopupFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessPopupFactory::*)()>(&HeadlessPopupFactory::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessPopupFactory::main))},
	{}
};

$ClassInfo _HeadlessPopupFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessPopupFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessPopupFactory_MethodInfo_
};

$Object* allocate$HeadlessPopupFactory($Class* clazz) {
	return $of($alloc(HeadlessPopupFactory));
}

void HeadlessPopupFactory::init$() {
}

void HeadlessPopupFactory::main($StringArray* args) {
	$var($PopupFactory, msm, $PopupFactory::getSharedInstance());
}

HeadlessPopupFactory::HeadlessPopupFactory() {
}

$Class* HeadlessPopupFactory::load$($String* name, bool initialize) {
	$loadClass(HeadlessPopupFactory, name, initialize, &_HeadlessPopupFactory_ClassInfo_, allocate$HeadlessPopupFactory);
	return class$;
}

$Class* HeadlessPopupFactory::class$ = nullptr;