#include <HeadlessSizeSequence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeSequence.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeSequence = ::javax::swing::SizeSequence;

$MethodInfo _HeadlessSizeSequence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessSizeSequence::*)()>(&HeadlessSizeSequence::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessSizeSequence::main))},
	{}
};

$ClassInfo _HeadlessSizeSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessSizeSequence",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessSizeSequence_MethodInfo_
};

$Object* allocate$HeadlessSizeSequence($Class* clazz) {
	return $of($alloc(HeadlessSizeSequence));
}

void HeadlessSizeSequence::init$() {
}

void HeadlessSizeSequence::main($StringArray* args) {
	$var($SizeSequence, ss, nullptr);
	$assign(ss, $new($SizeSequence));
	$assign(ss, $new($SizeSequence, 10));
	$assign(ss, $new($SizeSequence, 10, 10));
	$assign(ss, $new($SizeSequence, $$new($ints, {
		1,
		2,
		3,
		4,
		5,
		6,
		76,
		9
	})));
}

HeadlessSizeSequence::HeadlessSizeSequence() {
}

$Class* HeadlessSizeSequence::load$($String* name, bool initialize) {
	$loadClass(HeadlessSizeSequence, name, initialize, &_HeadlessSizeSequence_ClassInfo_, allocate$HeadlessSizeSequence);
	return class$;
}

$Class* HeadlessSizeSequence::class$ = nullptr;