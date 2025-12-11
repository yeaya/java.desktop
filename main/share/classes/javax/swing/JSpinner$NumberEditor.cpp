#include <javax/swing/JSpinner$NumberEditor.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/lang/Comparable.h>
#include <java/lang/Math.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Locale.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner$NumberEditorFormatter.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/NumberFormatter.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $ParseException = ::java::text::ParseException;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Locale = ::java::util::Locale;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JSpinner$NumberEditorFormatter = ::javax::swing::JSpinner$NumberEditorFormatter;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace javax {
	namespace swing {

$MethodInfo _JSpinner$NumberEditor_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner$NumberEditor::*)($JSpinner*)>(&JSpinner$NumberEditor::init$))},
	{"<init>", "(Ljavax/swing/JSpinner;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner$NumberEditor::*)($JSpinner*,$String*)>(&JSpinner$NumberEditor::init$))},
	{"<init>", "(Ljavax/swing/JSpinner;Ljava/text/DecimalFormat;)V", nullptr, $PRIVATE, $method(static_cast<void(JSpinner$NumberEditor::*)($JSpinner*,$DecimalFormat*)>(&JSpinner$NumberEditor::init$))},
	{"getDefaultPattern", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Locale*)>(&JSpinner$NumberEditor::getDefaultPattern))},
	{"getFormat", "()Ljava/text/DecimalFormat;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/SpinnerNumberModel;", nullptr, $PUBLIC},
	{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$NumberEditor_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$NumberEditor", "javax.swing.JSpinner", "NumberEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JSpinner$NumberEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSpinner$NumberEditor",
	"javax.swing.JSpinner$DefaultEditor",
	nullptr,
	nullptr,
	_JSpinner$NumberEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$NumberEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$NumberEditor($Class* clazz) {
	return $of($alloc(JSpinner$NumberEditor));
}

$String* JSpinner$NumberEditor::getDefaultPattern($Locale* locale) {
	$init(JSpinner$NumberEditor);
	$useLocalCurrentObjectStackCache();
	$var($LocaleProviderAdapter, adapter, nullptr);
	$load($NumberFormatProvider);
	$assign(adapter, $LocaleProviderAdapter::getAdapter($NumberFormatProvider::class$, locale));
	$var($LocaleResources, lr, $nc(adapter)->getLocaleResources(locale));
	if (lr == nullptr) {
		$assign(lr, $nc($($LocaleProviderAdapter::forJRE()))->getLocaleResources(locale));
	}
	$var($StringArray, all, $nc(lr)->getNumberPatterns());
	return $nc(all)->get(0);
}

void JSpinner$NumberEditor::init$($JSpinner* spinner) {
	$useLocalCurrentObjectStackCache();
	JSpinner$NumberEditor::init$(spinner, $(getDefaultPattern($($nc(spinner)->getLocale()))));
}

void JSpinner$NumberEditor::init$($JSpinner* spinner, $String* decimalFormatPattern) {
	JSpinner$NumberEditor::init$(spinner, $$new($DecimalFormat, decimalFormatPattern));
}

void JSpinner$NumberEditor::init$($JSpinner* spinner, $DecimalFormat* format) {
	$useLocalCurrentObjectStackCache();
	$JSpinner$DefaultEditor::init$(spinner);
	if (!($instanceOf($SpinnerNumberModel, $($nc(spinner)->getModel())))) {
		$throwNew($IllegalArgumentException, "model not a SpinnerNumberModel"_s);
	}
	$var($SpinnerNumberModel, model, $cast($SpinnerNumberModel, $nc(spinner)->getModel()));
	$var($NumberFormatter, formatter, $new($JSpinner$NumberEditorFormatter, model, format));
	$var($DefaultFormatterFactory, factory, $new($DefaultFormatterFactory, formatter));
	$var($JFormattedTextField, ftf, getTextField());
	$nc(ftf)->setEditable(true);
	ftf->setFormatterFactory(factory);
	ftf->setHorizontalAlignment($JTextField::RIGHT);
	try {
		$var($String, maxString, formatter->valueToString($($nc(model)->getMinimum())));
		$var($String, minString, formatter->valueToString($($nc(model)->getMaximum())));
		int32_t var$0 = $nc(maxString)->length();
		ftf->setColumns($Math::max(var$0, $nc(minString)->length()));
	} catch ($ParseException& e) {
	}
}

$DecimalFormat* JSpinner$NumberEditor::getFormat() {
	$useLocalCurrentObjectStackCache();
	return $cast($DecimalFormat, $nc((($cast($NumberFormatter, $($nc($(getTextField()))->getFormatter())))))->getFormat());
}

$SpinnerNumberModel* JSpinner$NumberEditor::getModel() {
	return ($cast($SpinnerNumberModel, $nc($(getSpinner()))->getModel()));
}

void JSpinner$NumberEditor::setComponentOrientation($ComponentOrientation* o) {
	$JSpinner$DefaultEditor::setComponentOrientation(o);
	$nc($(getTextField()))->setHorizontalAlignment($nc(o)->isLeftToRight() ? $JTextField::RIGHT : $JTextField::LEFT);
}

JSpinner$NumberEditor::JSpinner$NumberEditor() {
}

$Class* JSpinner$NumberEditor::load$($String* name, bool initialize) {
	$loadClass(JSpinner$NumberEditor, name, initialize, &_JSpinner$NumberEditor_ClassInfo_, allocate$JSpinner$NumberEditor);
	return class$;
}

$Class* JSpinner$NumberEditor::class$ = nullptr;

	} // swing
} // javax