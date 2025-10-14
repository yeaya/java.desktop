#include <Sysout4bug4666224.h>

#include <TestDialog4bug4666224.h>
#include <java/awt/Frame.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestDialog4bug4666224 = ::TestDialog4bug4666224;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sysout4bug4666224_FieldInfo_[] = {
	{"dialog", "LTestDialog4bug4666224;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4bug4666224, dialog)},
	{}
};

$MethodInfo _Sysout4bug4666224_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sysout4bug4666224::*)()>(&Sysout4bug4666224::init$))},
	{"createDialog", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Sysout4bug4666224::createDialog))},
	{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4bug4666224::createDialogWithInstructions))},
	{"failStatus", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Sysout4bug4666224::failStatus))},
	{"getFailureMessages", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&Sysout4bug4666224::getFailureMessages))},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Sysout4bug4666224::printInstructions))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Sysout4bug4666224::println))},
	{"setInstructionsWithExceptions", "([[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray2*,$StringArray*)>(&Sysout4bug4666224::setInstructionsWithExceptions))},
	{}
};

$ClassInfo _Sysout4bug4666224_ClassInfo_ = {
	$ACC_SUPER,
	"Sysout4bug4666224",
	"java.lang.Object",
	nullptr,
	_Sysout4bug4666224_FieldInfo_,
	_Sysout4bug4666224_MethodInfo_
};

$Object* allocate$Sysout4bug4666224($Class* clazz) {
	return $of($alloc(Sysout4bug4666224));
}

$TestDialog4bug4666224* Sysout4bug4666224::dialog = nullptr;

void Sysout4bug4666224::init$() {
}

void Sysout4bug4666224::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout4bug4666224);
	$assignStatic(Sysout4bug4666224::dialog, $new($TestDialog4bug4666224, $$new($Frame), "Instructions"_s));
	$nc(Sysout4bug4666224::dialog)->printInstructions(instructions);
	$nc(Sysout4bug4666224::dialog)->show();
	println("Any messages for the tester will display here."_s);
}

void Sysout4bug4666224::createDialog() {
	$init(Sysout4bug4666224);
	$assignStatic(Sysout4bug4666224::dialog, $new($TestDialog4bug4666224, $$new($Frame), "Instructions"_s));
	$var($StringArray, defInstr, $new($StringArray, {
		"Instructions will appear here. "_s,
		""_s
	}));
	$nc(Sysout4bug4666224::dialog)->printInstructions(defInstr);
	$nc(Sysout4bug4666224::dialog)->show();
	println("Any messages for the tester will display here."_s);
}

void Sysout4bug4666224::printInstructions($StringArray* instructions) {
	$init(Sysout4bug4666224);
	$nc(Sysout4bug4666224::dialog)->printInstructions(instructions);
}

void Sysout4bug4666224::println($String* messageIn) {
	$init(Sysout4bug4666224);
	$nc(Sysout4bug4666224::dialog)->displayMessage(messageIn);
}

void Sysout4bug4666224::setInstructionsWithExceptions($StringArray2* instructionsSet, $StringArray* exceptionsSet) {
	createDialogWithInstructions($nc(instructionsSet)->get(0));
	$init(Sysout4bug4666224);
	$nc(Sysout4bug4666224::dialog)->setInstructions(instructionsSet);
	$nc(Sysout4bug4666224::dialog)->setExceptionMessages(exceptionsSet);
}

$String* Sysout4bug4666224::getFailureMessages() {
	$init(Sysout4bug4666224);
	return $nc(Sysout4bug4666224::dialog)->failureMessages;
}

bool Sysout4bug4666224::failStatus() {
	$init(Sysout4bug4666224);
	return $nc(Sysout4bug4666224::dialog)->failStatus;
}

Sysout4bug4666224::Sysout4bug4666224() {
}

$Class* Sysout4bug4666224::load$($String* name, bool initialize) {
	$loadClass(Sysout4bug4666224, name, initialize, &_Sysout4bug4666224_ClassInfo_, allocate$Sysout4bug4666224);
	return class$;
}

$Class* Sysout4bug4666224::class$ = nullptr;