#include <javax/swing/text/Position$Bias.h>

#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _Position$Bias_FieldInfo_[] = {
	{"Forward", "Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Position$Bias, Forward)},
	{"Backward", "Ljavax/swing/text/Position$Bias;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Position$Bias, Backward)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Position$Bias, name)},
	{}
};

$MethodInfo _Position$Bias_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Position$Bias::*)($String*)>(&Position$Bias::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Position$Bias_InnerClassesInfo_[] = {
	{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Position$Bias_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.Position$Bias",
	"java.lang.Object",
	nullptr,
	_Position$Bias_FieldInfo_,
	_Position$Bias_MethodInfo_,
	nullptr,
	nullptr,
	_Position$Bias_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.Position"
};

$Object* allocate$Position$Bias($Class* clazz) {
	return $of($alloc(Position$Bias));
}

Position$Bias* Position$Bias::Forward = nullptr;
Position$Bias* Position$Bias::Backward = nullptr;

$String* Position$Bias::toString() {
	return this->name;
}

void Position$Bias::init$($String* name) {
	$set(this, name, name);
}

void clinit$Position$Bias($Class* class$) {
	$assignStatic(Position$Bias::Forward, $new(Position$Bias, "Forward"_s));
	$assignStatic(Position$Bias::Backward, $new(Position$Bias, "Backward"_s));
}

Position$Bias::Position$Bias() {
}

$Class* Position$Bias::load$($String* name, bool initialize) {
	$loadClass(Position$Bias, name, initialize, &_Position$Bias_ClassInfo_, clinit$Position$Bias, allocate$Position$Bias);
	return class$;
}

$Class* Position$Bias::class$ = nullptr;

		} // text
	} // swing
} // javax