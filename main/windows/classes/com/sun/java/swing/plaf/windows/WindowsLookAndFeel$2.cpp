#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$2.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Color.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/BorderUIResource$EtchedBorderUIResource.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $BorderUIResource$EtchedBorderUIResource = ::javax::swing::plaf::BorderUIResource$EtchedBorderUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$2, this$0)},
	{"val$shadow", "Ljava/awt/Color;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$2, val$shadow)},
	{"val$highlight", "Ljava/awt/Color;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$2, val$highlight)},
	{}
};

$MethodInfo _WindowsLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/awt/Color;Ljava/awt/Color;)V", "()V", 0, $method(static_cast<void(WindowsLookAndFeel$2::*)($WindowsLookAndFeel*,$Color*,$Color*)>(&WindowsLookAndFeel$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsLookAndFeel$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
	"getLazyValueDefaults",
	"()[Ljava/lang/Object;"
};

$InnerClassInfo _WindowsLookAndFeel$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_WindowsLookAndFeel$2_FieldInfo_,
	_WindowsLookAndFeel$2_MethodInfo_,
	nullptr,
	&_WindowsLookAndFeel$2_EnclosingMethodInfo_,
	_WindowsLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$2($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$2));
}

void WindowsLookAndFeel$2::init$($WindowsLookAndFeel* this$0, $Color* val$highlight, $Color* val$shadow) {
	$set(this, this$0, this$0);
	$set(this, val$highlight, val$highlight);
	$set(this, val$shadow, val$shadow);
}

$Object* WindowsLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($BorderUIResource$EtchedBorderUIResource, this->val$highlight, this->val$shadow));
}

WindowsLookAndFeel$2::WindowsLookAndFeel$2() {
}

$Class* WindowsLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$2, name, initialize, &_WindowsLookAndFeel$2_ClassInfo_, allocate$WindowsLookAndFeel$2);
	return class$;
}

$Class* WindowsLookAndFeel$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com