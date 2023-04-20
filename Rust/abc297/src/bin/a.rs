use proconio::input;

fn main() {
    input! {
        n: usize,
        d: i32,
        t: [i32; n],  // Vec<(i32, i32, i32)>
    }
    let mut ans: i32 = -1;
    for i in 1..n {
        if &t[i] - &t[i - 1] <= d {
            ans = t[i];
            break;
        }
    }
    println!("{:?}", &ans);
}
