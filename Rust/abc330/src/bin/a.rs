use proconio::input;

fn main() {
    input! {
        n: usize,
        l: usize,
        a: [usize; n],
    }

    let mut ans = 0;

    for i in 0..n {
        if a[i] >= l {
            ans += 1;
        }
    }

    println!("{}", ans);
}
