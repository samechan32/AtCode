use proconio::input;

fn main() {
    input! {
        s: String,
    };

    for c in s.chars() {
        print!("{} ", c);
    }
}
