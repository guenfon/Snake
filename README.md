# Snake
Game rắn săn mồi
# Hướng dẫn cài đặt
1. git clone https://github.com/guenfon/Snake.git
2. Mở file snake1.sln trong Visual Studio (phiên bản 2015)
3. Thay đổi cấu hình thành x86
4. Build chương trình
5. Copy tất cả các tệp có đuôi .dll từ ".\external\lib\x86" đến ".\MSVS\Debug\Output"
6. Copy thư mục "assets" từ ".\MSVS" đến ".\MSVS\Debug\Output"
7. Run chương trình
# Mô tả chung về trò chơi
Trò chơi dựa trên ý tương game rắn săn mỗi trên điện thoại nokia.
Game gồm 2 chế độ chơi:
1. Training: ở chế độ này người chơi sẽ điều khiển con rắn ăn được quả táo để có thể kiếm được nhiều điểm nhất có thể. Nếu con rắn đâm và tường hoặc tự cắn và thân thì người chơi sẽ thua
2. Survival: chế độ này tương tự chế độ trên tuy nhiêu người chơi phải ăn được quả táo trước khi hết thời gian quy định.
# Các chức năng đã cài đặt
1. settings: cho phếp người chơi chỉnh lại độ lớn của màn hình, thay đỏi mày nền, màu của rắn và màu của táo
 * color scheme: điều chỉnh màu của màn hình chơi
 * screen resolution: thay đổi kích cỡ màn hình
 * fullscreen: mở full màn hình hoặc để màn hình có kích cỡ mà đã cài đặt ở phần screen resolution
2. create profile: cho phếp người chơi tạo một tài khoản
 * create: tạo một tên mới
 * swith: thay đổi tài khoản xuất hiện sau khi tạo ít nhất một tài khoản
 * delete: xóa tài khoản kiện tại.
3. new game: ở phần này cho phép người chơi thiết lập cho con rắn về chiều dài ban đầu tốc độ có tường hay không và điều chỉnh độ rộng của tường, ở đây người chơi sẽ lựa chọn chế độ chơi đó là training hoặc survival
 * game mod: lựa chọn chế độ chơi
 * field size: tùy chỉnh độ rộng của map
 * game speed: tốc độ di chuyển của rắn
 * body size: độ dài ban đầu của rắn
 * borderless: tùy chỉnh việc rắn đi xuyên tường hoặc không
4. link video demo trò chơi: https://youtu.be/33VmgSVP0BQ
# Các kỹ thuật sử dụng trong chương trình
Class, hàng đợi, hàng đợi hai đầu, vector, mảng, con trỏ.
# Kết luận, hướng phát triển trong tương lai
1. Hướng phát triển trong tương lai:
  * Tạo con bot tự chơi game
  * Cải tiến chể độ survival: cho thêm nhiều loại táo và thêm các iteam
2. Kết luận và bài học rút ra:
  * Phải xây dựng những điều cần làm trươc khi bắt đầu một dự án
  * Sử dụng class giúp code đễ kiểm soát và tránh bị lỗi
  * Khi lập trình nên tách code thành các phần để dẽ quản lý code tránh bug
