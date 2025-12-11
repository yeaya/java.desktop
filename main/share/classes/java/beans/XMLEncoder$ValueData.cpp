#include <java/beans/XMLEncoder$ValueData.h>

#include <java/beans/Expression.h>
#include <java/beans/XMLEncoder.h>
#include <jcpp.h>

using $XMLEncoder = ::java::beans::XMLEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _XMLEncoder$ValueData_FieldInfo_[] = {
	{"this$0", "Ljava/beans/XMLEncoder;", nullptr, $FINAL | $SYNTHETIC, $field(XMLEncoder$ValueData, this$0)},
	{"refs", "I", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, refs)},
	{"marked", "Z", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, marked)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, name)},
	{"exp", "Ljava/beans/Expression;", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, exp)},
	{}
};

$MethodInfo _XMLEncoder$ValueData_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/XMLEncoder;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLEncoder$ValueData::*)($XMLEncoder*)>(&XMLEncoder$ValueData::init$))},
	{}
};

$InnerClassInfo _XMLEncoder$ValueData_InnerClassesInfo_[] = {
	{"java.beans.XMLEncoder$ValueData", "java.beans.XMLEncoder", "ValueData", $PRIVATE},
	{}
};

$ClassInfo _XMLEncoder$ValueData_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.XMLEncoder$ValueData",
	"java.lang.Object",
	nullptr,
	_XMLEncoder$ValueData_FieldInfo_,
	_XMLEncoder$ValueData_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEncoder$ValueData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.XMLEncoder"
};

$Object* allocate$XMLEncoder$ValueData($Class* clazz) {
	return $of($alloc(XMLEncoder$ValueData));
}

void XMLEncoder$ValueData::init$($XMLEncoder* this$0) {
	$set(this, this$0, this$0);
	this->refs = 0;
	this->marked = false;
	$set(this, name, nullptr);
	$set(this, exp, nullptr);
}

XMLEncoder$ValueData::XMLEncoder$ValueData() {
}

$Class* XMLEncoder$ValueData::load$($String* name, bool initialize) {
	$loadClass(XMLEncoder$ValueData, name, initialize, &_XMLEncoder$ValueData_ClassInfo_, allocate$XMLEncoder$ValueData);
	return class$;
}

$Class* XMLEncoder$ValueData::class$ = nullptr;

	} // beans
} // java