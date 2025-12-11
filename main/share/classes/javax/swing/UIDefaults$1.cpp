#include <javax/swing/UIDefaults$1.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Module.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace javax {
	namespace swing {

$FieldInfo _UIDefaults$1_FieldInfo_[] = {
	{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$1, val$baseName)},
	{"val$thisModule", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$1, val$thisModule)},
	{}
};

$MethodInfo _UIDefaults$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(UIDefaults$1::*)($Module*,$String*)>(&UIDefaults$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UIDefaults$1_EnclosingMethodInfo_ = {
	"javax.swing.UIDefaults",
	"isDesktopResourceBundle",
	"(Ljava/lang/String;)Z"
};

$InnerClassInfo _UIDefaults$1_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIDefaults$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIDefaults$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UIDefaults$1_FieldInfo_,
	_UIDefaults$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_UIDefaults$1_EnclosingMethodInfo_,
	_UIDefaults$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$1($Class* clazz) {
	return $of($alloc(UIDefaults$1));
}

void UIDefaults$1::init$($Module* val$thisModule, $String* val$baseName) {
	$set(this, val$thisModule, val$thisModule);
	$set(this, val$baseName, val$baseName);
}

$Object* UIDefaults$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName(this->val$thisModule, this->val$baseName);
	if (c != nullptr) {
		return $of($Boolean::valueOf(true));
	} else {
		$var($String, resourceName, $str({$($nc(this->val$baseName)->replace(u'.', u'/')), ".properties"_s}));
		try {
			$var($InputStream, in, $nc(this->val$thisModule)->getResourceAsStream(resourceName));
			{
				$var($Throwable, var$0, nullptr);
				$var($Object, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$assign(var$2, $Boolean::valueOf(in != nullptr));
						return$1 = true;
						goto $finally;
					} catch ($Throwable& t$) {
						if (in != nullptr) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					if (in != nullptr) {
						in->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException& e) {
			$throwNew($UncheckedIOException, e);
		}
	}
	$shouldNotReachHere();
}

UIDefaults$1::UIDefaults$1() {
}

$Class* UIDefaults$1::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$1, name, initialize, &_UIDefaults$1_ClassInfo_, allocate$UIDefaults$1);
	return class$;
}

$Class* UIDefaults$1::class$ = nullptr;

	} // swing
} // javax