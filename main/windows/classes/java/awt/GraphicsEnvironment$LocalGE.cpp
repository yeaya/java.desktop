#include <java/awt/GraphicsEnvironment$LocalGE.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/PlatformGraphicsInfo.h>
#include <sun/java2d/HeadlessGraphicsEnvironment.h>
#include <jcpp.h>

#undef INSTANCE

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformGraphicsInfo = ::sun::awt::PlatformGraphicsInfo;
using $HeadlessGraphicsEnvironment = ::sun::java2d::HeadlessGraphicsEnvironment;

namespace java {
	namespace awt {

$FieldInfo _GraphicsEnvironment$LocalGE_FieldInfo_[] = {
	{"INSTANCE", "Ljava/awt/GraphicsEnvironment;", nullptr, $STATIC | $FINAL, $staticField(GraphicsEnvironment$LocalGE, INSTANCE)},
	{}
};

$MethodInfo _GraphicsEnvironment$LocalGE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsEnvironment$LocalGE::*)()>(&GraphicsEnvironment$LocalGE::init$))},
	{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsEnvironment*(*)()>(&GraphicsEnvironment$LocalGE::createGE))},
	{}
};

$InnerClassInfo _GraphicsEnvironment$LocalGE_InnerClassesInfo_[] = {
	{"java.awt.GraphicsEnvironment$LocalGE", "java.awt.GraphicsEnvironment", "LocalGE", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsEnvironment$LocalGE_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsEnvironment$LocalGE",
	"java.lang.Object",
	nullptr,
	_GraphicsEnvironment$LocalGE_FieldInfo_,
	_GraphicsEnvironment$LocalGE_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsEnvironment$LocalGE_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsEnvironment"
};

$Object* allocate$GraphicsEnvironment$LocalGE($Class* clazz) {
	return $of($alloc(GraphicsEnvironment$LocalGE));
}


$GraphicsEnvironment* GraphicsEnvironment$LocalGE::INSTANCE = nullptr;

void GraphicsEnvironment$LocalGE::init$() {
}

$GraphicsEnvironment* GraphicsEnvironment$LocalGE::createGE() {
	$init(GraphicsEnvironment$LocalGE);
	$var($GraphicsEnvironment, ge, $PlatformGraphicsInfo::createGE());
	if ($GraphicsEnvironment::isHeadless()) {
		$assign(ge, $new($HeadlessGraphicsEnvironment, ge));
	}
	return ge;
}

void clinit$GraphicsEnvironment$LocalGE($Class* class$) {
	$assignStatic(GraphicsEnvironment$LocalGE::INSTANCE, GraphicsEnvironment$LocalGE::createGE());
}

GraphicsEnvironment$LocalGE::GraphicsEnvironment$LocalGE() {
}

$Class* GraphicsEnvironment$LocalGE::load$($String* name, bool initialize) {
	$loadClass(GraphicsEnvironment$LocalGE, name, initialize, &_GraphicsEnvironment$LocalGE_ClassInfo_, clinit$GraphicsEnvironment$LocalGE, allocate$GraphicsEnvironment$LocalGE);
	return class$;
}

$Class* GraphicsEnvironment$LocalGE::class$ = nullptr;

	} // awt
} // java