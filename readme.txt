# WinUI 3 Gallery 한 개 구현

## 0. 미리보기

![6](/img/6.png)

## 1. MainWindow.xaml 코드 중 ListBox 부분

리스트박스와 사각형의 Xaml 코드입니다.

리스트박스에 Blue, Green, Red, Yellow 항목을 넣어두고,

각 항목을 클릭할 때마다 아래의 사각형의 색깔이 변경됩니다.

```xaml
<Grid Grid.Row="1" Background="Gainsboro" CornerRadius="8">
	<StackPanel Padding="10" HorizontalAlignment="Left" VerticalAlignment="Center">
		<!-- 리스트박스 -->
		<ListBox x:Name="lb1" Width="200" SelectionChanged="ListBox_SelectionChanged">
			<ListBoxItem>Blue</ListBoxItem>
			<ListBoxItem>Green</ListBoxItem>
			<ListBoxItem>Red</ListBoxItem>
			<ListBoxItem>Yellow</ListBoxItem>
		</ListBox>

		<!-- 색깔 사각형-->
		<Rectangle x:Name="Control1Output" Height="30" Width="100" Margin="0,10,0,0" HorizontalAlignment="Center" />

	</StackPanel>
</Grid>
```

## 2. MainWindow.xaml.cpp 코드 중 SelectionChanged 함수

ListBoxItem의 선택 항목이 변경될 때 실행되는 CPP 코드의 함수입니다.

0번째 ListBoxItem을 선택하면 Blue 색상

1번째 ListBoxItem을 선택하면 Green 색상

2번째 ListBoxItem을 선택하면 Red 색상

3번째 ListBoxItem을 선택하면 Yellow 색상으로 사각형이 채워집니다.

```cpp
void MainWindow::ListBox_SelectionChanged(IInspectable const& /*sender*/, SelectionChangedEventArgs const& /*e*/)
{
	switch (lb1().SelectedIndex())
	{
	case 0:
		Control1Output().Fill(SolidColorBrush(Colors::Blue()));
		break;

	case 1:
		Control1Output().Fill(SolidColorBrush(Colors::Green()));
		break;

	case 2:
		Control1Output().Fill(SolidColorBrush(Colors::Red()));
		break;

	case 3:
		Control1Output().Fill(SolidColorBrush(Colors::Yellow()));
		break;
	}
}
```

## 3. 실행결과

[![1](http://img.youtube.com/vi/oQnX24UMQAA/0.jpg)](https://youtu.be/oQnX24UMQAA?t=0s)

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ▲ 이미지 클릭
