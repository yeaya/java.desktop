#include <HeadlessSizeRequirements.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;

$MethodInfo _HeadlessSizeRequirements_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessSizeRequirements::*)()>(&HeadlessSizeRequirements::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessSizeRequirements::main))},
	{}
};

$ClassInfo _HeadlessSizeRequirements_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessSizeRequirements",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessSizeRequirements_MethodInfo_
};

$Object* allocate$HeadlessSizeRequirements($Class* clazz) {
	return $of($alloc(HeadlessSizeRequirements));
}

void HeadlessSizeRequirements::init$() {
}

void HeadlessSizeRequirements::main($StringArray* args) {
	$var($SizeRequirements, sr, nullptr);
	$assign(sr, $new($SizeRequirements));
	$assign(sr, $new($SizeRequirements, 20, 20, 20, (float)1.0));
}

HeadlessSizeRequirements::HeadlessSizeRequirements() {
}

$Class* HeadlessSizeRequirements::load$($String* name, bool initialize) {
	$loadClass(HeadlessSizeRequirements, name, initialize, &_HeadlessSizeRequirements_ClassInfo_, allocate$HeadlessSizeRequirements);
	return class$;
}

$Class* HeadlessSizeRequirements::class$ = nullptr;