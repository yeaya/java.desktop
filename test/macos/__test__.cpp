#include <java.desktop.test.h>

#include <AbstractActionBug.h>
#include <AbstractDocumentUndoConcurrentTest.h>
#include <ActionListenerExceptionTest.h>
#include <AllSwingComponentsBaselineTest.h>
#include <AlwaysOnTopImeTest.h>
#include <AnimatedIcon.h>
#include <BackgroundImagePosition.h>
#include <BasicComboNPE.h>
#include <BasicListTest.h>
#include <BodyInheritedFontSize.h>
#include <Bug8134116.h>
#include <Bug8154069.h>
#include <Bug8161483.h>
#include <ButtonGradientTest.h>
#include <ButtonGroupFocusTest.h>
#include <CaretFloatingPointAPITest.h>
#include <CheckCancellationException.h>
#include <CheckCommonUseCases.h>
#include <CleanInternalStorageOnSetText.h>
#include <ClickMenuTestManual.h>
#include <CloseOnMouseClickPropertyTest.h>
#include <ColorCustomizationTest.h>
#include <ComboPopupTest.h>
#include <ComponentSetNameTest.h>
#include <ComponentTest.h>
#include <ContextMenuScrollTest.h>
#include <ContextualMenuClearsTextSelectionTest.h>
#include <DNDTextToScaledArea.h>
#include <DefaultButtonModelCrashTest.h>
#include <DefaultButtonTest.h>
#include <DefaultComboBoxModelAddAllElementsTest.h>
#include <DefaultListModelAddAllTest.h>
#include <DefaultRowSorterCacheTest.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <DefaultTreeCellRendererBorderTest.h>
#include <DemandGTK.h>
#include <DerivedColorHueTest.h>
#include <DeserializedJFileChooserTest.h>
#include <DesktopPaneBackgroundTest.h>
#include <DevanagariEditor.h>
#include <DockIconRepaint.h>
#include <DocumentInsertAtWrongPositionTest.h>
#include <DrawGridLinesTest.h>
#include <ExternalDriveNameTest.h>
#include <FPMethodCalledTest.h>
#include <FastTooltipSwitchIAE.h>
#include <FileChooserListenerLeak.h>
#include <FileChooserTest.h>
#include <FocusTraversal.h>
#include <FontByDefault.h>
#include <FontSetByLaF.h>
#include <FontSetByUser.h>
#include <FontSetToNull.h>
#include <GetSelectedValueTest.h>
#include <GetSelectedValuesListTest.h>
#include <GetSpanHiDpiBug.h>
#include <GetUI.h>
#include <GetUpToDateData.h>
#include <HTMLEditorKitWriterBug.h>
#include <HangDuringStaticInitialization.h>
#include <HangNonVolatileBuffer.h>
#include <HeadlessAbstractSpinnerModel.h>
#include <HeadlessBox.h>
#include <HeadlessBox_Filler.h>
#include <HeadlessCellRendererPane.h>
#include <HeadlessDefaultListCellRenderer.h>
#include <HeadlessDefaultListCellRenderer_UIResource.h>
#include <HeadlessGrayFilter.h>
#include <HeadlessJApplet.h>
#include <HeadlessJButton.h>
#include <HeadlessJCheckBox.h>
#include <HeadlessJCheckBoxMenuItem.h>
#include <HeadlessJColorChooser.h>
#include <HeadlessJComboBox.h>
#include <HeadlessJComponent.h>
#include <HeadlessJDesktopPane.h>
#include <HeadlessJDialog.h>
#include <HeadlessJEditorPane.h>
#include <HeadlessJFileChooser.h>
#include <HeadlessJFormattedTextField.h>
#include <HeadlessJFrame.h>
#include <HeadlessJInternalFrame.h>
#include <HeadlessJInternalFrame_JDesktopIcon.h>
#include <HeadlessJLabel.h>
#include <HeadlessJLayeredPane.h>
#include <HeadlessJList.h>
#include <HeadlessJMenu.h>
#include <HeadlessJMenuBar.h>
#include <HeadlessJMenuItem.h>
#include <HeadlessJOptionPane.h>
#include <HeadlessJPanel.h>
#include <HeadlessJPasswordField.h>
#include <HeadlessJPopupMenu.h>
#include <HeadlessJPopupMenu_Separator.h>
#include <HeadlessJProgressBar.h>
#include <HeadlessJRadioButton.h>
#include <HeadlessJRadioButtonMenuItem.h>
#include <HeadlessJRootPane.h>
#include <HeadlessJScrollBar.h>
#include <HeadlessJScrollPane.h>
#include <HeadlessJSeparator.h>
#include <HeadlessJSlider.h>
#include <HeadlessJSpinner.h>
#include <HeadlessJSplitPane.h>
#include <HeadlessJTabbedPane.h>
#include <HeadlessJTable.h>
#include <HeadlessJTextArea.h>
#include <HeadlessJTextField.h>
#include <HeadlessJTextPane.h>
#include <HeadlessJToggleButton.h>
#include <HeadlessJToolBar.h>
#include <HeadlessJToolBar_Separator.h>
#include <HeadlessJToolTip.h>
#include <HeadlessJTree.h>
#include <HeadlessJViewport.h>
#include <HeadlessJWindow.h>
#include <HeadlessLookAndFeel.h>
#include <HeadlessMenuSelectionManager.h>
#include <HeadlessOverlayLayout.h>
#include <HeadlessPopupFactory.h>
#include <HeadlessScrollPaneLayout.h>
#include <HeadlessSizeRequirements.h>
#include <HeadlessSizeSequence.h>
#include <HeadlessSpinnerListModel.h>
#include <HeadlessSpinnerNumberModel.h>
#include <HeadlessTimer.h>
#include <HiddenDefaultButtonTest.h>
#include <HidingSelectionTest.h>
#include <HtmlCommentTagParseTest.h>
#include <HtmlFontSizeTest.h>
#include <I18NViewNoWrapMinSpan.h>
#include <IconCoord.h>
#include <IconifyTest.h>
#include <ImageViewTest.h>
#include <InternalFrameIcon.h>
#include <InternalFrameIsNotCollectedTest.h>
#include <InternalResourceBundle.h>
#include <JColorChooserDnDTest.h>
#include <JComboBoxPopupLocation.h>
#include <JEditorPaneTest.h>
#include <JFileChooserCombolistSelection.h>
#include <JFileChooserOrientation.h>
#include <JFileChooserTest.h>
#include <JFormattedTextFieldTest.h>
#include <JFrameMenuSerializationTest.h>
#include <JInternalFrameDraggingTest.h>
#include <JInternalFrameIconTest.h>
#include <JMenuItemToolTipKeyBindingsTest.h>
#include <JMenuItemsTest.h>
#include <JMenuSelectedColorTest.h>
#include <JOptionPaneConfirmDlgTest.h>
#include <JPopupMenuEndlessLoopTest.h>
#include <JSpinnerButtonFocusTest.h>
#include <JTabbedPaneSerialization.h>
#include <JTableAccessibleGetLocationOnScreen.h>
#include <JTableScrollTest.h>
#include <JTextAreaEmojiTest.h>
#include <JTextAreaOrientationTest.h>
#include <JTextAreaWordWrapTest.h>
#include <JTextPaneDocumentAlignment.h>
#include <JTextPaneDocumentWrapping.h>
#include <JTreeFocusTest.h>
#include <JViewPortBackingStoreImageTest.h>
#include <JapaneseReadingAttributes.h>
#include <LabelDotTest.h>
#include <LastNodeLowerHalfDrop.h>
#include <ListSelectionModelTest.h>
#include <LostTextTest.h>
#include <MaximumSizeTest.h>
#include <MenuItemIconTest.h>
#include <MetalHiDPIIconsTest.h>
#include <MetalHiDPISliderThumbTest.h>
#include <MisplacedBorder.h>
#include <MissingCharsKorean.h>
#include <MotifHiDPIIconsTest.h>
#include <MultiSelectionTest.h>
#include <MultiUIDefaultsNPECheck.h>
#include <NestedWorkers.h>
#include <NimbusGlueTest.h>
#include <NimbusPropertiesDoNotImplUIResource.h>
#include <NonOpaquePopupMenuTest.h>
#include <NormalBoundsTest.h>
#include <OptionPaneTest.h>
#include <OrderOfGConfigNotify.h>
#include <PaintContextScaleValidation.h>
#include <PaintThumbSize.h>
#include <Pending.h>
#include <PopupReferenceMemoryLeak.h>
#include <PressedButtonRightClickTest.h>
#include <PressedIconTest.h>
#include <ProgressMonitorEscapeKeyPress.h>
#include <ProvokeGTK.h>
#include <RGBColorValueTest.h>
#include <RTFWriteParagraphAlignTest.h>
#include <RenderBadPictureCrash.h>
#include <RepaintManagerFPUIScaleTest.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <RightAltKeyTest.h>
#include <RootPaneDecorationSize.h>
#include <ScaledFrameBackgroundTest.h>
#include <ScrollBarThumbVisibleTest.h>
#include <ScrollableTabbedPaneTest.h>
#include <SelectAllFilesFilterTest.h>
#include <SetInvokerJPopupMenuTest.h>
#include <SetLayerNPE.h>
#include <SetSelectedValueTest.h>
#include <ShellFolderQueriesSecurityManagerTest.h>
#include <ShellFolderQueriesTest.h>
#include <ShowPopupAfterHidePopupTest.h>
#include <SilenceOfDeprecatedMenuBar.h>
#include <SliderTickTest.h>
#include <SpinnerTest.h>
#include <SwingContainerIsForContainerOnly.h>
#include <SwingFontMetricsTest.h>
#include <SynthScrollbarThumbPainterTest.h>
#include <SynthTest.h>
#include <SystemIconTest.h>
#include <SystemLookAndFeelTest.h>
#include <TabProb.h>
#include <TableHeaderRendererExceptionTest.h>
#include <TableTest.h>
#include <TableViewLayoutTest.h>
#include <Test4120351.h>
#include <Test4124729.h>
#include <Test4165217.h>
#include <Test4177735.h>
#include <Test4193384.h>
#include <Test4461329.h>
#include <Test4711996.h>
#include <Test4783068.h>
#include <Test6199676.h>
#include <Test6256140.h>
#include <Test6325652.h>
#include <Test6461042.h>
#include <Test6462562.h>
#include <Test6505027.h>
#include <Test6526631.h>
#include <Test6541987.h>
#include <Test6559154.h>
#include <Test6593649.h>
#include <Test6625450.h>
#include <Test6632810.h>
#include <Test6657026MetalBorders.h>
#include <Test6707406.h>
#include <Test6741426.h>
#include <Test6802868.h>
#include <Test6849805.h>
#include <Test6860438.h>
#include <Test6888156.h>
#include <Test6919629.h>
#include <Test6933784.h>
#include <Test6943780.h>
#include <Test6981576.h>
#include <Test6984643.h>
#include <Test7022041.h>
#include <Test7024235.h>
#include <Test7034614.h>
#include <Test7048204.h>
#include <Test7149090.h>
#include <Test7163696.h>
#include <Test7195179.h>
#include <Test8003400.h>
#include <Test8007563.h>
#include <Test8013370.h>
#include <Test8013442.h>
#include <Test8013571.h>
#include <Test8015336.h>
#include <Test8015926.h>
#include <Test8019180.h>
#include <Test8030118.h>
#include <Test8039464.h>
#include <Test8039750.h>
#include <Test8043627.h>
#include <Test8051548.h>
#include <Test8152419.h>
#include <TestAbstractRegionPainter.h>
#include <TestBackgroundScrollPolicy.h>
#include <TestBadBreak.h>
#include <TestBasicComboBoxEditor.h>
#include <TestBoxFiller.h>
#include <TestBrowserBGColor.h>
#include <TestButtonGroupFocusTraversal.h>
#include <TestCaretPosition.h>
#include <TestCaretPositionJTextPane.h>
#include <TestClearSel.h>
#include <TestCustomStyleFactory.h>
#include <TestDefaultFormatter.h>
#include <TestDisabledToolTipBorder.h>
#include <TestFormViewNPE.h>
#include <TestGlyphBreak.h>
#include <TestHTMLBulletsSizeAndAliasing.h>
#include <TestJCheckBoxMenuItem.h>
#include <TestJEditor.h>
#include <TestJFileChooserNewFolderAction.h>
#include <TestJInternalFrameIconify.h>
#include <TestJLabelWithHTMLText.h>
#include <TestJProgressBarHighlightColor.h>
#include <TestJSliderRendering.h>
#include <TestJSpinnerPressUnpress.h>
#include <TestJTableCellEditor.h>
#include <TestJTextPaneBackgroundColor.h>
#include <TestJTextPaneHTMLRendering.h>
#include <TestMemLeakComboBox.h>
#include <TestMultiScreenGConfigNotify.h>
#include <TestNimbusOverride.h>
#include <TestNullLocale.h>
#include <TestObjectView.h>
#include <TestOpaqueListTable.h>
#include <TestPopupMenu.h>
#include <TestProperties.h>
#include <TestProxyLazyValue.h>
#include <TestSelectedTextBackgroundColor.h>
#include <TestSingleScreenGConfigNotify.h>
#include <TestTabSize.h>
#include <TestTabSizeWithLineWrap.h>
#include <TestTextPosInPrint.h>
#include <TestTitledBorderLeak.h>
#include <TestTooltipBackgroundColor.h>
#include <TestTransferHandler.h>
#include <TestTranslucentLabelText.h>
#include <TestUIDefaultsErrorHandling.h>
#include <TestWrongCSSFontSize.h>
#include <TextBeanProperty.h>
#include <TextSelectionTest.h>
#include <TextViewOOM.h>
#include <TimeChangeButtonClickTest.h>
#include <TitledBorderLabel.h>
#include <TitledBorderLabelUITest.h>
#include <TitledBorderTest.h>
#include <TooMuchWheelRotationEventsTest.h>
#include <TooltipImageTest.h>
#include <TransparencyTest.h>
#include <TreeClipTest.h>
#include <UIClientPropertyKeyTest.h>
#include <UIDefaultKeySizeTest.h>
#include <UIManagerSetLookAndFeelNPETest.h>
#include <UpdateUIRecursionTest.h>
#include <VerifyTargetTest.h>
#include <WindowsClassicHiDPIIconsTest.h>
#include <WindowsComboBoxSizeTest.h>
#include <WrongAltProcessing.h>
#include <WrongBackgroundColor.h>
#include <WrongSelectionOnMouseOver.h>
#include <bug4128979.h>
#include <bug4201995.h>
#include <bug4247996.h>
#include <bug4251579.h>
#include <bug4252173.h>
#include <bug4275046.h>
#include <bug4300666.h>
#include <bug4310381.h>
#include <bug4337267.h>
#include <bug4361477.h>
#include <bug4368790.h>
#include <bug4449413.h>
#include <bug4473075.h>
#include <bug4492274.h>
#include <bug4496801.h>
#include <bug4506788.h>
#include <bug4529206.h>
#include <bug4530474.h>
#include <bug4697612.h>
#include <bug4708809.h>
#include <bug4714674.h>
#include <bug4726194.h>
#include <bug4743225.h>
#include <bug4760494.h>
#include <bug4765271.h>
#include <bug4788637.h>
#include <bug4816114.h>
#include <bug4870644.h>
#include <bug4885629.h>
#include <bug4927934.h>
#include <bug4936917.h>
#include <bug4960629.h>
#include <bug4962534.h>
#include <bug4966171.h>
#include <bug5043626.h>
#include <bug5073047.h>
#include <bug5074573.h>
#include <bug5076514.h>
#include <bug6209975.h>
#include <bug6219960.h>
#include <bug6236162.h>
#include <bug6249972.h>
#include <bug6263446.h>
#include <bug6263446JTree.h>
#include <bug6274267.h>
#include <bug6278700.h>
#include <bug6302464.h>
#include <bug6337518.h>
#include <bug6342301.h>
#include <bug6348946.h>
#include <bug6361367.h>
#include <bug6406264.h>
#include <bug6432565.h>
#include <bug6438430.h>
#include <bug6462008.h>
#include <bug6463712.h>
#include <bug6474153.h>
#include <bug6484091.h>
#include <bug6489130.h>
#include <bug6493680.h>
#include <bug6495408.h>
#include <bug6501991.h>
#include <bug6505523.h>
#include <bug6510999.h>
#include <bug6514582.h>
#include <bug6520101.h>
#include <bug6532833.h>
#include <bug6542335.h>
#include <bug6544309.h>
#include <bug6547087.h>
#include <bug6559152.h>
#include <bug6559589.h>
#include <bug6570445.h>
#include <bug6578666.h>
#include <bug6583251.h>
#include <bug6604281.h>
#include <bug6607130.h>
#include <bug6608456.h>
#include <bug6612531.h>
#include <bug6613904.h>
#include <bug6622002.h>
#include <bug6632953.h>
#include <bug6639507.h>
#include <bug6647340.h>
#include <bug6670274.h>
#include <bug6675802.h>
#include <bug6683775.h>
#include <bug6688203.h>
#include <bug6690791.h>
#include <bug6691503.h>
#include <bug6694823.h>
#include <bug6698013.h>
#include <bug6711682.h>
#include <bug6735286.h>
#include <bug6735293.h>
#include <bug6738668.h>
#include <bug6739756.h>
#include <bug6742358.h>
#include <bug6768387.h>
#include <bug6771184.h>
#include <bug6777378.h>
#include <bug6794831.h>
#include <bug6794836.h>
#include <bug6797139.h>
#include <bug6823603.h>
#include <bug6836089.h>
#include <bug6848475.h>
#include <bug6866751.h>
#include <bug6868611.h>
#include <bug6872503.h>
#include <bug6875153.h>
#include <bug6875716.h>
#include <bug6882559.h>
#include <bug6883341.h>
#include <bug6884066.h>
#include <bug6889007.h>
#include <bug6894632.h>
#include <bug6913768.h>
#include <bug6917744.h>
#include <bug6918861.h>
#include <bug6923305.h>
#include <bug6924059.h>
#include <bug6925473.h>
#include <bug6937798.h>
#include <bug6938583.h>
#include <bug6953396.h>
#include <bug6987844.h>
#include <bug6989617.h>
#include <bug6994419.h>
#include <bug7003777.h>
#include <bug7010561.h>
#include <bug7011777.h>
#include <bug7013453.h>
#include <bug7027139.h>
#include <bug7030332.h>
#include <bug7031551.h>
#include <bug7032791.h>
#include <bug7036025.h>
#include <bug7036148.h>
#include <bug7045593.h>
#include <bug7049024.h>
#include <bug7068740.h>
#include <bug7071166.h>
#include <bug7072653.h>
#include <bug7082443.h>
#include <bug7083457.h>
#include <bug7088744.h>
#include <bug7107099.h>
#include <bug7138665.h>
#include <bug7141573.h>
#include <bug7142955.h>
#include <bug7146377.h>
#include <bug7161568.h>
#include <bug7165725.h>
#include <bug7170657.h>
#include <bug7189299.h>
#include <bug7193219.h>
#include <bug7199708.h>
#include <bug8001470.h>
#include <bug8003830.h>
#include <bug8005019.h>
#include <bug8005391.h>
#include <bug8008657.h>
#include <bug8010718.h>
#include <bug8013566.h>
#include <bug8015853.h>
#include <bug8016833.h>
#include <bug8017284.h>
#include <bug8021253.h>
#include <bug8023474.h>
#include <bug8028616.h>
#include <bug8031109.h>
#include <bug8031573.h>
#include <bug8031971.h>
#include <bug8032874.h>
#include <bug8032878.h>
#include <bug8033699.h>
#include <bug8034955.h>
#include <bug8037575.h>
#include <bug8040328.h>
#include <bug8041561.h>
#include <bug8041642.h>
#include <bug8041725.h>
#include <bug8041982.h>
#include <bug8044371.h>
#include <bug8048110.h>
#include <bug8048506.h>
#include <bug8049533.h>
#include <bug8054543.h>
#include <bug8057791.h>
#include <bug8057893.h>
#include <bug8058120.h>
#include <bug8058305.h>
#include <bug8059739.h>
#include <bug8067346.h>
#include <bug8071705.h>
#include <bug8072767.h>
#include <bug8074956.h>
#include <bug8075314.h>
#include <bug8075609.h>
#include <bug8078268.h>
#include <bug8079640.h>
#include <bug8081019.h>
#include <bug8081411.h>
#include <bug8132119.h>
#include <bug8134721.h>
#include <bug8158734.h>
#include <jcpp.h>

#undef TAB

class TestCases : public $Object {
public:
	TestCases() {}
	void init$($StringArray* args) {
		$Object::init$();
		$set(this, casesArgs, args);
	}

	bool isListAction() {
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				return true;
			}
		}
		return false;
	}

	bool isSelectedOne() {
		bool exitsInclude = false;
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				return false;
			} else if ("--exclude"_s->equals(arg)) {
				return false;
			} else {
				return true;
			}
		}
		return false;
	}

	bool isSelected(const char* caseName, bool excludeFromAll) {
		bool exitsInclude = false;
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				i++;
				exitsInclude = true;
				if (i < casesArgs->length) {
					$String* include = $arrayGet($String, casesArgs, i);
					$var($StringArray, includeArray, include->split(","_s));
					for (int32_t j = 0; j < includeArray->length; j++) {
						$String* includeItem = $arrayGet<$String>(includeArray, j);
						if ($(includeItem->trim())->equals(caseName)) {
							return true;
						}
					}
				}
			} else if ("--exclude"_s->equals(arg)) {
				i++;
				if (i < casesArgs->length) {
					$String* exclude = $arrayGet($String, casesArgs, i);
					$var($StringArray, excludeArray, exclude->split(","_s));
					for (int32_t j = 0; j < excludeArray->length; j++) {
						$String* excludeItem = $arrayGet<$String>(excludeArray, j);
						if ($(excludeItem->trim())->equals(caseName)) {
							return false;
						}
					}
				}
			} else {
				exitsInclude = true;
				if (arg->equals(caseName)) {
					return true;
				}
			}
		}
		if (excludeFromAll) {
			return false;
		}
		return !exitsInclude;
	}

	template<typename T>
	void runCase(const char* caseName, bool excludeFromAll = false, $StringArray* args = nullptr) {
		if (isListAction()) {
			processedCount++;
			if (excludeFromAll) {
				$System::out->println($$str({ "#case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			} else {
				$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			}
		} else {
			if (isSelected(caseName, excludeFromAll)) {
				processedCount++;
				if (!isSelectedOne()) {
					$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
				}
				int64_t beginMs = $System::currentTimeMillis();
				if (args != nullptr) {
					T::main(args);
				} else {
					T::main($$new($StringArray, 0));
				}
				int64_t endMs = $System::currentTimeMillis();
				$System::out->println($$str({ $$str(endMs - beginMs), "ms"_s }));
				if (!isSelectedOne()) {
					$System::out->println(""_s);
				}
			}
		}
	}

	template<typename T>
	void runCase(const char* caseName, $StringArray* args) {
		runCase<T>(caseName, false, args);
	}

	void runCases();
private:
	$StringArray* casesArgs = nullptr;
	int32_t processedCount = 0;
};

#define run(caseName, caseClass, ...) runCase<caseClass>(caseName, ##__VA_ARGS__);

void TestCases::runCases() {
	int64_t runCasesBeginMs = $System::currentTimeMillis();

	run("AbstractActionBug", ::AbstractActionBug);
	run("AbstractDocumentUndoConcurrentTest", ::AbstractDocumentUndoConcurrentTest);
	run("ActionListenerExceptionTest", ::ActionListenerExceptionTest);
	run("AllSwingComponentsBaselineTest", ::AllSwingComponentsBaselineTest);
	run("AlwaysOnTopImeTest", ::AlwaysOnTopImeTest);
	run("AnimatedIcon", ::AnimatedIcon);
	run("BackgroundImagePosition", ::BackgroundImagePosition);
	run("BasicComboNPE", ::BasicComboNPE);
	run("BasicListTest", ::BasicListTest);
	run("BodyInheritedFontSize", ::BodyInheritedFontSize);
	run("Bug8134116", ::Bug8134116);
	run("Bug8154069", ::Bug8154069);
	run("Bug8161483", ::Bug8161483, true);
	run("ButtonGradientTest", ::ButtonGradientTest, true);
	run("ButtonGroupFocusTest", ::ButtonGroupFocusTest);
	run("CaretFloatingPointAPITest", ::CaretFloatingPointAPITest);
	run("CheckCancellationException", ::CheckCancellationException);
	run("CheckCommonUseCases", ::CheckCommonUseCases);
	run("CleanInternalStorageOnSetText", ::CleanInternalStorageOnSetText);
	run("ClickMenuTestManual", ::ClickMenuTestManual);
	run("CloseOnMouseClickPropertyTest", ::CloseOnMouseClickPropertyTest);
	run("ColorCustomizationTest", ::ColorCustomizationTest);
	run("ComboPopupTest", ::ComboPopupTest);
	run("ComponentSetNameTest", ::ComponentSetNameTest);
	run("ComponentTest", ::ComponentTest);
	run("ContextMenuScrollTest", ::ContextMenuScrollTest);
	run("ContextualMenuClearsTextSelectionTest", ::ContextualMenuClearsTextSelectionTest);
	run("DNDTextToScaledArea", ::DNDTextToScaledArea);
	run("DefaultButtonModelCrashTest", ::DefaultButtonModelCrashTest);
	run("DefaultButtonTest", ::DefaultButtonTest, true);
	run("DefaultComboBoxModelAddAllElementsTest", ::DefaultComboBoxModelAddAllElementsTest);
	run("DefaultListModelAddAllTest", ::DefaultListModelAddAllTest);
	run("DefaultRowSorterCacheTest", ::DefaultRowSorterCacheTest);
	run("DefaultRowSorterIOOBEtest", ::DefaultRowSorterIOOBEtest);
	run("DefaultTreeCellRendererBorderTest", ::DefaultTreeCellRendererBorderTest);
	run("DemandGTK", ::DemandGTK, true);
	run("DerivedColorHueTest", ::DerivedColorHueTest);
	run("DeserializedJFileChooserTest", ::DeserializedJFileChooserTest);
	run("DesktopPaneBackgroundTest", ::DesktopPaneBackgroundTest);
	run("DevanagariEditor", ::DevanagariEditor);
	run("DockIconRepaint", ::DockIconRepaint, true);
	run("DocumentInsertAtWrongPositionTest", ::DocumentInsertAtWrongPositionTest);
	run("DrawGridLinesTest", ::DrawGridLinesTest);
	run("ExternalDriveNameTest", ::ExternalDriveNameTest);
	run("FPMethodCalledTest", ::FPMethodCalledTest);
	run("FastTooltipSwitchIAE", ::FastTooltipSwitchIAE);
	run("FileChooserListenerLeak", ::FileChooserListenerLeak);
	run("FileChooserTest", ::FileChooserTest, true);
	run("FocusTraversal", ::FocusTraversal);
	run("FontByDefault", ::FontByDefault);
	run("FontSetByLaF", ::FontSetByLaF);
	run("FontSetByUser", ::FontSetByUser);
	run("FontSetToNull", ::FontSetToNull);
	run("GetSelectedValueTest", ::GetSelectedValueTest);
	run("GetSelectedValuesListTest", ::GetSelectedValuesListTest);
	run("GetSpanHiDpiBug", ::GetSpanHiDpiBug);
	run("GetUI", ::GetUI);
	run("GetUpToDateData", ::GetUpToDateData);
	run("HTMLEditorKitWriterBug", ::HTMLEditorKitWriterBug);
	run("HangDuringStaticInitialization", ::HangDuringStaticInitialization);
	run("HangNonVolatileBuffer", ::HangNonVolatileBuffer);
	run("HeadlessAbstractSpinnerModel", ::HeadlessAbstractSpinnerModel);
	run("HeadlessBox", ::HeadlessBox);
	run("HeadlessBox_Filler", ::HeadlessBox_Filler);
	run("HeadlessCellRendererPane", ::HeadlessCellRendererPane);
	run("HeadlessDefaultListCellRenderer", ::HeadlessDefaultListCellRenderer);
	run("HeadlessDefaultListCellRenderer_UIResource", ::HeadlessDefaultListCellRenderer_UIResource);
	run("HeadlessGrayFilter", ::HeadlessGrayFilter);
	run("HeadlessJApplet", ::HeadlessJApplet, true);
	run("HeadlessJButton", ::HeadlessJButton);
	run("HeadlessJCheckBox", ::HeadlessJCheckBox);
	run("HeadlessJCheckBoxMenuItem", ::HeadlessJCheckBoxMenuItem);
	run("HeadlessJColorChooser", ::HeadlessJColorChooser);
	run("HeadlessJComboBox", ::HeadlessJComboBox);
	run("HeadlessJComponent", ::HeadlessJComponent);
	run("HeadlessJDesktopPane", ::HeadlessJDesktopPane);
	run("HeadlessJDialog", ::HeadlessJDialog, true);
	run("HeadlessJEditorPane", ::HeadlessJEditorPane);
	run("HeadlessJFileChooser", ::HeadlessJFileChooser);
	run("HeadlessJFormattedTextField", ::HeadlessJFormattedTextField);
	run("HeadlessJFrame", ::HeadlessJFrame, true);
	run("HeadlessJInternalFrame", ::HeadlessJInternalFrame);
	run("HeadlessJInternalFrame_JDesktopIcon", ::HeadlessJInternalFrame_JDesktopIcon);
	run("HeadlessJLabel", ::HeadlessJLabel);
	run("HeadlessJLayeredPane", ::HeadlessJLayeredPane);
	run("HeadlessJList", ::HeadlessJList);
	run("HeadlessJMenu", ::HeadlessJMenu);
	run("HeadlessJMenuBar", ::HeadlessJMenuBar);
	run("HeadlessJMenuItem", ::HeadlessJMenuItem);
	run("HeadlessJOptionPane", ::HeadlessJOptionPane);
	run("HeadlessJPanel", ::HeadlessJPanel);
	run("HeadlessJPasswordField", ::HeadlessJPasswordField);
	run("HeadlessJPopupMenu", ::HeadlessJPopupMenu);
	run("HeadlessJPopupMenu_Separator", ::HeadlessJPopupMenu_Separator);
	run("HeadlessJProgressBar", ::HeadlessJProgressBar);
	run("HeadlessJRadioButton", ::HeadlessJRadioButton);
	run("HeadlessJRadioButtonMenuItem", ::HeadlessJRadioButtonMenuItem);
	run("HeadlessJRootPane", ::HeadlessJRootPane);
	run("HeadlessJScrollBar", ::HeadlessJScrollBar);
	run("HeadlessJScrollPane", ::HeadlessJScrollPane);
	run("HeadlessJSeparator", ::HeadlessJSeparator);
	run("HeadlessJSlider", ::HeadlessJSlider);
	run("HeadlessJSpinner", ::HeadlessJSpinner);
	run("HeadlessJSplitPane", ::HeadlessJSplitPane);
	run("HeadlessJTabbedPane", ::HeadlessJTabbedPane);
	run("HeadlessJTable", ::HeadlessJTable);
	run("HeadlessJTextArea", ::HeadlessJTextArea);
	run("HeadlessJTextField", ::HeadlessJTextField);
	run("HeadlessJTextPane", ::HeadlessJTextPane);
	run("HeadlessJToggleButton", ::HeadlessJToggleButton);
	run("HeadlessJToolBar", ::HeadlessJToolBar);
	run("HeadlessJToolBar_Separator", ::HeadlessJToolBar_Separator);
	run("HeadlessJToolTip", ::HeadlessJToolTip);
	run("HeadlessJTree", ::HeadlessJTree);
	run("HeadlessJViewport", ::HeadlessJViewport);
	run("HeadlessJWindow", ::HeadlessJWindow, true);
	run("HeadlessLookAndFeel", ::HeadlessLookAndFeel);
	run("HeadlessMenuSelectionManager", ::HeadlessMenuSelectionManager);
	run("HeadlessOverlayLayout", ::HeadlessOverlayLayout);
	run("HeadlessPopupFactory", ::HeadlessPopupFactory);
	run("HeadlessScrollPaneLayout", ::HeadlessScrollPaneLayout);
	run("HeadlessSizeRequirements", ::HeadlessSizeRequirements);
	run("HeadlessSizeSequence", ::HeadlessSizeSequence);
	run("HeadlessSpinnerListModel", ::HeadlessSpinnerListModel);
	run("HeadlessSpinnerNumberModel", ::HeadlessSpinnerNumberModel);
	run("HeadlessTimer", ::HeadlessTimer);
	run("HiddenDefaultButtonTest", ::HiddenDefaultButtonTest);
	run("HidingSelectionTest", ::HidingSelectionTest, true);
	run("HtmlCommentTagParseTest", ::HtmlCommentTagParseTest, true);
	run("HtmlFontSizeTest", ::HtmlFontSizeTest);
	run("I18NViewNoWrapMinSpan", ::I18NViewNoWrapMinSpan);
	run("IconCoord", ::IconCoord, true);
	run("IconifyTest", ::IconifyTest, true);
	run("ImageViewTest", ::ImageViewTest, true);
	run("InternalFrameIcon", ::InternalFrameIcon);
	run("InternalFrameIsNotCollectedTest", ::InternalFrameIsNotCollectedTest, true);
	run("InternalResourceBundle", ::InternalResourceBundle);
	run("JColorChooserDnDTest", ::JColorChooserDnDTest);
	run("JComboBoxPopupLocation", ::JComboBoxPopupLocation);
	run("JEditorPaneTest", ::JEditorPaneTest);
	run("JFileChooserCombolistSelection", ::JFileChooserCombolistSelection);
	run("JFileChooserOrientation", ::JFileChooserOrientation);
	run("JFileChooserTest", ::JFileChooserTest);
	run("JFormattedTextFieldTest", ::JFormattedTextFieldTest);
	run("JFrameMenuSerializationTest", ::JFrameMenuSerializationTest);
	run("JInternalFrameDraggingTest", ::JInternalFrameDraggingTest);
	run("JInternalFrameIconTest", ::JInternalFrameIconTest);
	run("JMenuItemToolTipKeyBindingsTest", ::JMenuItemToolTipKeyBindingsTest);
	run("JMenuItemsTest", ::JMenuItemsTest);
	run("JMenuSelectedColorTest", ::JMenuSelectedColorTest);
	run("JOptionPaneConfirmDlgTest", ::JOptionPaneConfirmDlgTest, true);
	run("JPopupMenuEndlessLoopTest", ::JPopupMenuEndlessLoopTest);
	run("JSpinnerButtonFocusTest", ::JSpinnerButtonFocusTest);
	run("JTabbedPaneSerialization", ::JTabbedPaneSerialization);
	run("JTableAccessibleGetLocationOnScreen", ::JTableAccessibleGetLocationOnScreen);
	run("JTableScrollTest", ::JTableScrollTest);
	run("JTextAreaEmojiTest", ::JTextAreaEmojiTest);
	run("JTextAreaOrientationTest", ::JTextAreaOrientationTest);
	run("JTextAreaWordWrapTest", ::JTextAreaWordWrapTest);
	run("JTextPaneDocumentAlignment", ::JTextPaneDocumentAlignment);
	run("JTextPaneDocumentWrapping", ::JTextPaneDocumentWrapping);
	run("JTreeFocusTest", ::JTreeFocusTest);
	run("JViewPortBackingStoreImageTest", ::JViewPortBackingStoreImageTest);
	run("JapaneseReadingAttributes", ::JapaneseReadingAttributes, true);
	run("LabelDotTest", ::LabelDotTest);
	run("LastNodeLowerHalfDrop", ::LastNodeLowerHalfDrop);
	run("ListSelectionModelTest", ::ListSelectionModelTest);
	run("LostTextTest", ::LostTextTest);
	run("MaximumSizeTest", ::MaximumSizeTest);
	run("MenuItemIconTest", ::MenuItemIconTest);
	run("MetalHiDPIIconsTest", ::MetalHiDPIIconsTest);
	run("MetalHiDPISliderThumbTest", ::MetalHiDPISliderThumbTest);
	run("MisplacedBorder", ::MisplacedBorder);
	run("MissingCharsKorean", ::MissingCharsKorean, true);
	run("MotifHiDPIIconsTest", ::MotifHiDPIIconsTest);
	run("MultiSelectionTest", ::MultiSelectionTest, true);
	run("MultiUIDefaultsNPECheck", ::MultiUIDefaultsNPECheck);
	run("NestedWorkers", ::NestedWorkers);
	run("NimbusGlueTest", ::NimbusGlueTest);
	run("NimbusPropertiesDoNotImplUIResource", ::NimbusPropertiesDoNotImplUIResource);
	run("NonOpaquePopupMenuTest", ::NonOpaquePopupMenuTest, true);
	run("NormalBoundsTest", ::NormalBoundsTest);
	run("OptionPaneTest", ::OptionPaneTest);
	run("OrderOfGConfigNotify", ::OrderOfGConfigNotify);
	run("PaintContextScaleValidation", ::PaintContextScaleValidation);
	run("PaintThumbSize", ::PaintThumbSize);
	run("Pending", ::Pending);
	run("PopupReferenceMemoryLeak", ::PopupReferenceMemoryLeak);
	run("PressedButtonRightClickTest", ::PressedButtonRightClickTest);
	run("PressedIconTest", ::PressedIconTest);
	run("ProgressMonitorEscapeKeyPress", ::ProgressMonitorEscapeKeyPress);
	run("ProvokeGTK", ::ProvokeGTK);
	run("RGBColorValueTest", ::RGBColorValueTest);
	run("RTFWriteParagraphAlignTest", ::RTFWriteParagraphAlignTest);
	run("RenderBadPictureCrash", ::RenderBadPictureCrash);
	run("RepaintManagerFPUIScaleTest", ::RepaintManagerFPUIScaleTest);
	run("RepaintOnFrameIconifiedStateChangeTest", ::RepaintOnFrameIconifiedStateChangeTest);
	run("RightAltKeyTest", ::RightAltKeyTest);
	run("RootPaneDecorationSize", ::RootPaneDecorationSize);
	run("ScaledFrameBackgroundTest", ::ScaledFrameBackgroundTest);
	run("ScrollBarThumbVisibleTest", ::ScrollBarThumbVisibleTest);
	run("ScrollableTabbedPaneTest", ::ScrollableTabbedPaneTest);
	run("SelectAllFilesFilterTest", ::SelectAllFilesFilterTest, true);
	run("SetInvokerJPopupMenuTest", ::SetInvokerJPopupMenuTest);
	run("SetLayerNPE", ::SetLayerNPE);
	run("SetSelectedValueTest", ::SetSelectedValueTest);
	run("ShellFolderQueriesSecurityManagerTest", ::ShellFolderQueriesSecurityManagerTest, true);
	run("ShellFolderQueriesTest", ::ShellFolderQueriesTest);
	run("ShowPopupAfterHidePopupTest", ::ShowPopupAfterHidePopupTest);
	run("SilenceOfDeprecatedMenuBar", ::SilenceOfDeprecatedMenuBar);
	run("SliderTickTest", ::SliderTickTest);
	run("SpinnerTest", ::SpinnerTest);
	run("SwingContainerIsForContainerOnly", ::SwingContainerIsForContainerOnly);
	run("SwingFontMetricsTest", ::SwingFontMetricsTest);
	run("SynthScrollbarThumbPainterTest", ::SynthScrollbarThumbPainterTest, true);
	run("SynthTest", ::SynthTest, true);
	run("SystemIconTest", ::SystemIconTest);
	run("SystemLookAndFeelTest", ::SystemLookAndFeelTest);
	run("TabProb", ::TabProb);
	run("TableHeaderRendererExceptionTest", ::TableHeaderRendererExceptionTest);
	run("TableTest", ::TableTest);
	run("TableViewLayoutTest", ::TableViewLayoutTest);
	run("Test4120351", ::Test4120351);
	run("Test4124729", ::Test4124729);
	run("Test4165217", ::Test4165217);
	run("Test4177735", ::Test4177735);
	run("Test4193384", ::Test4193384);
	run("Test4461329", ::Test4461329);
	run("Test4711996", ::Test4711996);
	run("Test4783068", ::Test4783068);
	run("Test6199676", ::Test6199676);
	run("Test6256140", ::Test6256140, true);
	run("Test6325652", ::Test6325652);
	run("Test6461042", ::Test6461042);
	run("Test6462562", ::Test6462562);
	run("Test6505027", ::Test6505027);
	run("Test6526631", ::Test6526631);
	run("Test6541987", ::Test6541987, true);
	run("Test6559154", ::Test6559154);
	run("Test6593649", ::Test6593649);
	run("Test6625450", ::Test6625450);
	run("Test6632810", ::Test6632810);
	run("Test6657026MetalBorders", ::Test6657026MetalBorders);
	run("Test6707406", ::Test6707406);
	run("Test6741426", ::Test6741426);
	run("Test6802868", ::Test6802868);
	run("Test6849805", ::Test6849805);
	run("Test6860438", ::Test6860438);
	run("Test6888156", ::Test6888156);
	run("Test6919629", ::Test6919629);
	run("Test6933784", ::Test6933784, true);
	run("Test6943780", ::Test6943780);
	run("Test6981576", ::Test6981576);
	run("Test6984643", ::Test6984643);
	run("Test7022041", ::Test7022041);
	run("Test7024235", ::Test7024235);
	run("Test7034614", ::Test7034614);
	run("Test7048204", ::Test7048204);
	run("Test7149090", ::Test7149090, true);
	run("Test7163696", ::Test7163696);
	run("Test7195179", ::Test7195179);
	run("Test8003400", ::Test8003400);
	run("Test8007563", ::Test8007563);
	run("Test8013370", ::Test8013370);
	run("Test8013442", ::Test8013442);
	run("Test8013571", ::Test8013571);
	run("Test8015336", ::Test8015336);
	run("Test8015926", ::Test8015926);
	run("Test8019180", ::Test8019180);
	run("Test8030118", ::Test8030118);
	run("Test8039464", ::Test8039464);
	run("Test8039750", ::Test8039750, true);
	run("Test8043627", ::Test8043627);
	run("Test8051548", ::Test8051548, true);
	run("Test8152419", ::Test8152419, true);
	run("TestAbstractRegionPainter", ::TestAbstractRegionPainter, true);
	run("TestBackgroundScrollPolicy", ::TestBackgroundScrollPolicy);
	run("TestBadBreak", ::TestBadBreak, true);
	run("TestBasicComboBoxEditor", ::TestBasicComboBoxEditor);
	run("TestBoxFiller", ::TestBoxFiller);
	run("TestBrowserBGColor", ::TestBrowserBGColor);
	run("TestButtonGroupFocusTraversal", ::TestButtonGroupFocusTraversal, true);
	run("TestCaretPosition", ::TestCaretPosition);
	run("TestCaretPositionJTextPane", ::TestCaretPositionJTextPane);
	run("TestClearSel", ::TestClearSel, true);
	run("TestCustomStyleFactory", ::TestCustomStyleFactory);
	run("TestDefaultFormatter", ::TestDefaultFormatter);
	run("TestDisabledToolTipBorder", ::TestDisabledToolTipBorder, true);
	run("TestFormViewNPE", ::TestFormViewNPE);
	run("TestGlyphBreak", ::TestGlyphBreak);
	run("TestHTMLBulletsSizeAndAliasing", ::TestHTMLBulletsSizeAndAliasing, true);
	run("TestJCheckBoxMenuItem", ::TestJCheckBoxMenuItem);
	run("TestJEditor", ::TestJEditor);
	run("TestJFileChooserNewFolderAction", ::TestJFileChooserNewFolderAction);
	run("TestJInternalFrameIconify", ::TestJInternalFrameIconify);
	run("TestJLabelWithHTMLText", ::TestJLabelWithHTMLText, true);
	run("TestJProgressBarHighlightColor", ::TestJProgressBarHighlightColor);
	run("TestJSliderRendering", ::TestJSliderRendering);
	run("TestJSpinnerPressUnpress", ::TestJSpinnerPressUnpress);
	run("TestJTableCellEditor", ::TestJTableCellEditor);
	run("TestJTextPaneBackgroundColor", ::TestJTextPaneBackgroundColor);
	run("TestJTextPaneHTMLRendering", ::TestJTextPaneHTMLRendering, true);
	run("TestMemLeakComboBox", ::TestMemLeakComboBox);
	run("TestMultiScreenGConfigNotify", ::TestMultiScreenGConfigNotify);
	run("TestNimbusOverride", ::TestNimbusOverride);
	run("TestNullLocale", ::TestNullLocale);
	run("TestObjectView", ::TestObjectView);
	run("TestOpaqueListTable", ::TestOpaqueListTable);
	run("TestPopupMenu", ::TestPopupMenu);
	run("TestProperties", ::TestProperties);
	run("TestProxyLazyValue", ::TestProxyLazyValue);
	run("TestSelectedTextBackgroundColor", ::TestSelectedTextBackgroundColor);
	run("TestSingleScreenGConfigNotify", ::TestSingleScreenGConfigNotify);
	run("TestTabSize", ::TestTabSize);
	run("TestTabSizeWithLineWrap", ::TestTabSizeWithLineWrap, true);
	run("TestTextPosInPrint", ::TestTextPosInPrint, true);
	run("TestTitledBorderLeak", ::TestTitledBorderLeak, true);
	run("TestTooltipBackgroundColor", ::TestTooltipBackgroundColor);
	run("TestTransferHandler", ::TestTransferHandler);
	run("TestTranslucentLabelText", ::TestTranslucentLabelText, true);
	run("TestUIDefaultsErrorHandling", ::TestUIDefaultsErrorHandling);
	run("TestWrongCSSFontSize", ::TestWrongCSSFontSize, true);
	run("TextBeanProperty", ::TextBeanProperty);
	run("TextSelectionTest", ::TextSelectionTest, true);
	run("TextViewOOM", ::TextViewOOM);
	run("TimeChangeButtonClickTest", ::TimeChangeButtonClickTest, true);
	run("TitledBorderLabel", ::TitledBorderLabel, true);
	{
		$var($StringArray, args, $new($StringArray, 1));
		args->set(0, "LAF"_s);
		run("TitledBorderLabelUITest", ::TitledBorderLabelUITest, args);
	}
	run("TitledBorderTest", ::TitledBorderTest, true);
	run("TooMuchWheelRotationEventsTest", ::TooMuchWheelRotationEventsTest, true);
	run("TooltipImageTest", ::TooltipImageTest, true);
	run("TransparencyTest", ::TransparencyTest);
	run("TreeClipTest", ::TreeClipTest);
	run("UIClientPropertyKeyTest", ::UIClientPropertyKeyTest);
	run("UIDefaultKeySizeTest", ::UIDefaultKeySizeTest, true);
	run("UIManagerSetLookAndFeelNPETest", ::UIManagerSetLookAndFeelNPETest);
	run("UpdateUIRecursionTest", ::UpdateUIRecursionTest);
	run("VerifyTargetTest", ::VerifyTargetTest);
	run("WindowsClassicHiDPIIconsTest", ::WindowsClassicHiDPIIconsTest);
	run("WindowsComboBoxSizeTest", ::WindowsComboBoxSizeTest);
	run("WrongAltProcessing", ::WrongAltProcessing);
	run("WrongBackgroundColor", ::WrongBackgroundColor);
	run("WrongSelectionOnMouseOver", ::WrongSelectionOnMouseOver);
	run("bug4128979", ::bug4128979);
	run("bug4201995", ::bug4201995, true);
	run("bug4247996", ::bug4247996);
	run("bug4251579", ::bug4251579);
	run("bug4252173", ::bug4252173);
	run("bug4275046", ::bug4275046);
	run("bug4300666", ::bug4300666);
	run("bug4310381", ::bug4310381);
	run("bug4337267", ::bug4337267);
	run("bug4361477", ::bug4361477);
	run("bug4368790", ::bug4368790);
	run("bug4449413", ::bug4449413);
	run("bug4473075", ::bug4473075);
	run("bug4492274", ::bug4492274, true);
	run("bug4496801", ::bug4496801);
	run("bug4506788", ::bug4506788, true);
	run("bug4529206", ::bug4529206);
	run("bug4530474", ::bug4530474, true);
	run("bug4697612", ::bug4697612, true);
	run("bug4708809", ::bug4708809);
	run("bug4714674", ::bug4714674, true);
	run("bug4726194", ::bug4726194);
	run("bug4743225", ::bug4743225);
	run("bug4760494", ::bug4760494);
	run("bug4765271", ::bug4765271);
	run("bug4788637", ::bug4788637);
	run("bug4816114", ::bug4816114);
	run("bug4870644", ::bug4870644);
	run("bug4885629", ::bug4885629);
	run("bug4927934", ::bug4927934);
	run("bug4936917", ::bug4936917, true);
	run("bug4960629", ::bug4960629);
	run("bug4962534", ::bug4962534);
	run("bug4966171", ::bug4966171);
	run("bug5043626", ::bug5043626, true);
	run("bug5073047", ::bug5073047);
	run("bug5074573", ::bug5074573, true);
	run("bug5076514", ::bug5076514);
	run("bug6209975", ::bug6209975);
	run("bug6219960", ::bug6219960);
	run("bug6236162", ::bug6236162);
	run("bug6249972", ::bug6249972);
	run("bug6263446", ::bug6263446);
	run("bug6263446JTree", ::bug6263446JTree);
	run("bug6274267", ::bug6274267);
	run("bug6278700", ::bug6278700);
	run("bug6302464", ::bug6302464);
	run("bug6337518", ::bug6337518);
	run("bug6342301", ::bug6342301);
	run("bug6348946", ::bug6348946);
	run("bug6361367", ::bug6361367);
	run("bug6406264", ::bug6406264);
	run("bug6432565", ::bug6432565);
	run("bug6438430", ::bug6438430);
	run("bug6462008", ::bug6462008);
	run("bug6463712", ::bug6463712);
	run("bug6474153", ::bug6474153);
	run("bug6484091", ::bug6484091, true);
	run("bug6489130", ::bug6489130, true);
	run("bug6493680", ::bug6493680);
	run("bug6495408", ::bug6495408);
	run("bug6501991", ::bug6501991);
	run("bug6505523", ::bug6505523);
	run("bug6510999", ::bug6510999);
	run("bug6514582", ::bug6514582);
	run("bug6520101", ::bug6520101);
	run("bug6532833", ::bug6532833);
	run("bug6542335", ::bug6542335);
	run("bug6544309", ::bug6544309, true);
	run("bug6547087", ::bug6547087);
	run("bug6559152", ::bug6559152, true);
	run("bug6559589", ::bug6559589);
	run("bug6570445", ::bug6570445);
	run("bug6578666", ::bug6578666);
	run("bug6583251", ::bug6583251);
	run("bug6604281", ::bug6604281);
	run("bug6607130", ::bug6607130);
	run("bug6608456", ::bug6608456, true);
	run("bug6612531", ::bug6612531);
	run("bug6613904", ::bug6613904);
	run("bug6622002", ::bug6622002, true);
	run("bug6632953", ::bug6632953);
	run("bug6639507", ::bug6639507);
	run("bug6647340", ::bug6647340);
	run("bug6670274", ::bug6670274);
	run("bug6675802", ::bug6675802, true);
	run("bug6683775", ::bug6683775, true);
	run("bug6688203", ::bug6688203);
	run("bug6690791", ::bug6690791);
	run("bug6691503", ::bug6691503, true);
	run("bug6694823", ::bug6694823);
	run("bug6698013", ::bug6698013);
	run("bug6711682", ::bug6711682);
	run("bug6735286", ::bug6735286);
	run("bug6735293", ::bug6735293);
	run("bug6738668", ::bug6738668);
	run("bug6739756", ::bug6739756);
	run("bug6742358", ::bug6742358);
	run("bug6768387", ::bug6768387);
	run("bug6771184", ::bug6771184);
	run("bug6777378", ::bug6777378);
	run("bug6794831", ::bug6794831);
	run("bug6794836", ::bug6794836);
	run("bug6797139", ::bug6797139);
	run("bug6823603", ::bug6823603);
	run("bug6836089", ::bug6836089);
	run("bug6848475", ::bug6848475);
	run("bug6866751", ::bug6866751);
	run("bug6868611", ::bug6868611);
	run("bug6872503", ::bug6872503);
	run("bug6875153", ::bug6875153);
	run("bug6875716", ::bug6875716);
	run("bug6882559", ::bug6882559);
	run("bug6883341", ::bug6883341);
	run("bug6884066", ::bug6884066);
	run("bug6889007", ::bug6889007);
	run("bug6894632", ::bug6894632);
	run("bug6913768", ::bug6913768);
	run("bug6917744", ::bug6917744, true);
	run("bug6918861", ::bug6918861);
	run("bug6923305", ::bug6923305);
	run("bug6924059", ::bug6924059);
	run("bug6925473", ::bug6925473);
	run("bug6937798", ::bug6937798);
	run("bug6938583", ::bug6938583);
	run("bug6953396", ::bug6953396);
	run("bug6987844", ::bug6987844);
	run("bug6989617", ::bug6989617);
	run("bug6994419", ::bug6994419);
	run("bug7003777", ::bug7003777);
	run("bug7010561", ::bug7010561);
	run("bug7011777", ::bug7011777);
	run("bug7013453", ::bug7013453);
	run("bug7027139", ::bug7027139);
	run("bug7030332", ::bug7030332);
	run("bug7031551", ::bug7031551);
	run("bug7032791", ::bug7032791);
	run("bug7036025", ::bug7036025);
	run("bug7036148", ::bug7036148, true);
	run("bug7045593", ::bug7045593, true);
	run("bug7049024", ::bug7049024);
	run("bug7068740", ::bug7068740);
	run("bug7071166", ::bug7071166);
	run("bug7072653", ::bug7072653, true);
	run("bug7082443", ::bug7082443);
	run("bug7083457", ::bug7083457);
	run("bug7088744", ::bug7088744);
	run("bug7107099", ::bug7107099);
	run("bug7138665", ::bug7138665, true);
	run("bug7141573", ::bug7141573);
	run("bug7142955", ::bug7142955);
	run("bug7146377", ::bug7146377);
	run("bug7161568", ::bug7161568);
	run("bug7165725", ::bug7165725, true);
	run("bug7170657", ::bug7170657);
	run("bug7189299", ::bug7189299);
	run("bug7193219", ::bug7193219);
	run("bug7199708", ::bug7199708, true);
	run("bug8001470", ::bug8001470, true);
	run("bug8003830", ::bug8003830);
	run("bug8005019", ::bug8005019);
	run("bug8005391", ::bug8005391);
	run("bug8008657", ::bug8008657);
	run("bug8010718", ::bug8010718);
	run("bug8013566", ::bug8013566);
	run("bug8015853", ::bug8015853, true);
	run("bug8016833", ::bug8016833);
	run("bug8017284", ::bug8017284);
	run("bug8021253", ::bug8021253);
	run("bug8023474", ::bug8023474);
	run("bug8028616", ::bug8028616);
	run("bug8031109", ::bug8031109);
	run("bug8031573", ::bug8031573);
	run("bug8031971", ::bug8031971);
	run("bug8032874", ::bug8032874);
	run("bug8032878", ::bug8032878);
	run("bug8033699", ::bug8033699);
	run("bug8034955", ::bug8034955, true);
	run("bug8037575", ::bug8037575);
	run("bug8040328", ::bug8040328);
	run("bug8041561", ::bug8041561);
	run("bug8041642", ::bug8041642);
	run("bug8041725", ::bug8041725);
	run("bug8041982", ::bug8041982, true);
	run("bug8044371", ::bug8044371);
	run("bug8048110", ::bug8048110);
	run("bug8048506", ::bug8048506);
	run("bug8049533", ::bug8049533);
	run("bug8054543", ::bug8054543);
	run("bug8057791", ::bug8057791, true);
	run("bug8057893", ::bug8057893);
	run("bug8058120", ::bug8058120);
	run("bug8058305", ::bug8058305, true);
	run("bug8059739", ::bug8059739);
	run("bug8067346", ::bug8067346);
	run("bug8071705", ::bug8071705);
	run("bug8072767", ::bug8072767);
	run("bug8074956", ::bug8074956);
	run("bug8075314", ::bug8075314);
	run("bug8075609", ::bug8075609);
	run("bug8078268", ::bug8078268, true);
	run("bug8079640", ::bug8079640);
	run("bug8081019", ::bug8081019, true);
	run("bug8081411", ::bug8081411);
	run("bug8132119", ::bug8132119);
	run("bug8134721", ::bug8134721);
	run("bug8158734", ::bug8158734);

	int64_t runCaseEndMs = $System::currentTimeMillis();
	if (processedCount > 1) {
		$System::out->println($$str({"runCases "_s, $$str(processedCount), " "_s, $$str(runCaseEndMs - runCasesBeginMs), "ms"_s}));
	}
	$System::out->flush();
}

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::java$desktop$test::init, []($StringArray* args)->void {
		$var(TestCases, testcases, $new(TestCases, args));
		testcases->runCases();
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::java$desktop$test::init, []($StringArray* args)->void {
		$var(TestCases, testcases, $new(TestCases, args));
		testcases->runCases();
	});
}
#endif