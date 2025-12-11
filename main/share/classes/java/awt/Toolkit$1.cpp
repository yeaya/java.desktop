#include <java/awt/Toolkit$1.h>

#include <java/awt/Toolkit.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace java {
	namespace awt {

$FieldInfo _Toolkit$1_FieldInfo_[] = {
	{"val$properties", "Ljava/util/Properties;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$1, val$properties)},
	{"val$sep", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$1, val$sep)},
	{}
};

$MethodInfo _Toolkit$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Properties;)V", "()V", 0, $method(static_cast<void(Toolkit$1::*)($String*,$Properties*)>(&Toolkit$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Toolkit$1_EnclosingMethodInfo_ = {
	"java.awt.Toolkit",
	"initAssistiveTechnologies",
	"()V"
};

$InnerClassInfo _Toolkit$1_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Toolkit$1_FieldInfo_,
	_Toolkit$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Toolkit$1_EnclosingMethodInfo_,
	_Toolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$1($Class* clazz) {
	return $of($alloc(Toolkit$1));
}

void Toolkit$1::init$($String* val$sep, $Properties* val$properties) {
	$set(this, val$sep, val$sep);
	$set(this, val$properties, val$properties);
}

$Object* Toolkit$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, propsFile, $new($File, $$str({$($System::getProperty("user.home"_s)), this->val$sep, ".accessibility.properties"_s})));
		$var($FileInputStream, in, $new($FileInputStream, propsFile));
		$nc(this->val$properties)->load(static_cast<$InputStream*>(in));
		in->close();
	} catch ($Exception& e) {
	}
	if ($nc(this->val$properties)->size() == 0) {
		try {
			$var($File, propsFile, $new($File, $$str({$($System::getProperty("java.home"_s)), this->val$sep, "conf"_s, this->val$sep, "accessibility.properties"_s})));
			$var($FileInputStream, in, $new($FileInputStream, propsFile));
			$nc(this->val$properties)->load(static_cast<$InputStream*>(in));
			in->close();
		} catch ($Exception& e) {
		}
	}
	$var($String, magPresent, $System::getProperty("javax.accessibility.screen_magnifier_present"_s));
	if (magPresent == nullptr) {
		$assign(magPresent, $nc(this->val$properties)->getProperty("screen_magnifier_present"_s, nullptr));
		if (magPresent != nullptr) {
			$System::setProperty("javax.accessibility.screen_magnifier_present"_s, magPresent);
		}
	}
	$var($String, classNames, $System::getProperty("javax.accessibility.assistive_technologies"_s));
	if (classNames == nullptr) {
		$assign(classNames, $nc(this->val$properties)->getProperty("assistive_technologies"_s, nullptr));
		if (classNames != nullptr) {
			$System::setProperty("javax.accessibility.assistive_technologies"_s, classNames);
		}
	}
	return $of(classNames);
}

Toolkit$1::Toolkit$1() {
}

$Class* Toolkit$1::load$($String* name, bool initialize) {
	$loadClass(Toolkit$1, name, initialize, &_Toolkit$1_ClassInfo_, allocate$Toolkit$1);
	return class$;
}

$Class* Toolkit$1::class$ = nullptr;

	} // awt
} // java