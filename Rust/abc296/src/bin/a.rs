use proconio::input;

fn main() {
    input! {
        _n: usize,
        s: String,
    }

    let mut ans = "Yes";
    for i in 1..s.len() as usize {
        if s.chars().nth(i).unwrap() == s.chars().nth(i - 1).unwrap() {
            ans = "No";
            break;
        }
    }

    println!("{}", ans);
}
